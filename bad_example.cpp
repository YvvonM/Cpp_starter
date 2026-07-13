#include <vector>
#include <mutex>
#include <cstring>

// Global counter accessed from multiple threads with no synchronization.
int g_request_count = 0;

class Buffer {
public:
    Buffer(size_t size) {
        data_ = new char[size];   // raw new, no matching delete anywhere -> leak
        size_ = size;
    }

    // No destructor, no copy constructor, no copy assignment operator.
    // Copying a Buffer will double-free data_ when both copies are destroyed.

    char* raw() { return data_; }

private:
    char* data_;
    size_t size_;
};

// Returns a pointer to a local stack variable -> dangling pointer.
int* make_dangling() {
    int local_value = 42;
    return &local_value;
}

// Signed integer overflow is undefined behavior.
int sum_to_overflow(int n) {
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result = result * 2;  // overflows for large n
    }
    return result;
}

// Increments a shared global with no lock -> data race if called concurrently.
void handle_request() {
    g_request_count++;
}

// Takes a large vector by value instead of by const reference -> unnecessary copy.
int sum_vector(std::vector<int> values) {
    int total = 0;
    for (size_t i = 0; i < values.size(); i++) {
        total += values[i];
    }
    return total;
}

// Virtual call inside a tight loop -> performance pitfall in a hot path.
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

double total_area(const std::vector<Shape*>& shapes) {
    double sum = 0.0;
    for (int i = 0; i < 1000000; ++i) {
        for (auto* s : shapes) {
            sum += s->area();  // virtual dispatch in hot loop
        }
    }
    return sum;
}

int main() {
    Buffer b1(64);
    Buffer b2 = b1;  // shallow copy, sets up double free

    int* p = make_dangling();
    std::memset(p, 0, sizeof(int));  // use-after-scope

    sum_to_overflow(100);
    handle_request();

    std::vector<int> nums = {1, 2, 3, 4, 5};
    sum_vector(nums);

    return 0;
}
