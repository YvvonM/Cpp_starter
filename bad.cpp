// parser.cpp
#include <vector>
#include <string>
#include <cstring>

class Buffer {
public:
    Buffer(size_t size) : data_(new char[size]), size_(size) {}
    
    char* get() { return dat
    
private:
    char* data_;
    size_t size_;
};

std::vector<std::string> split(const char* input, char delim) {
    std::vector<std::string> result;
    char* copy = strdup(input);  // leak if exception thrown below
    char* token = strtok(copy, &delim);
    while (token) {
        result.push_back(token);
        token = strtok(nullptr, &delim);
    }
    // free(copy);  // oops, commented out
    return result;
}

int process(int* arr, size_t n) {
    int sum = 0;
    for (int i = 0; i <= n; ++i) {  // off-by-one: should be i < n
        sum += arr[i];
    }
    return sum;
}
