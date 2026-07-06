//Focus: variables, constants, data types, input/output, arithmetic, functions
// 1. Write a program that asks for your name and age, then prints them.

#include<iostream>
using namespace std;
int main() {
    string name;
    int age;
    cout << "Enter your name: ";
	cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your name is " << name << endl;
    cout << "you are " << age << " years old" << endl;
    return 0;
}

// 2. Ask the user for two integers and print their sum.
#include <iostream>
using namespace std;
int sum(int x, int y) {
	return  x + y;
}
int main() {
    int x;
    int y;
    cout << "Enter a whole number" << endl;
    cin >> x;
    cout << "Enter another whole number" << endl;
    cin >> y;
	cout << "The sume of the two number is: " << sum(x, y) << endl;
    return 0;


}

// 3. Create a function that returns the square of a number.
#include <iostream>
using namespace std;
int square_number(int z) {
	return  z * z;
}
int main() {
    int z;
    cout << "Enter a whole number: " << endl;
	cin>> z;
	cout << "The square of "<< z << " is " << square_number(z)<<endl;
    return 0;

}

// 4. Write a function that converts Celsius to Fahrenheit.
#include <iostream>
using namespace std;

double cel_to_far(double y) {
    const int ADD_NUM = 32;
    const double MUL_NUM = 1.8;
    return (y * MUL_NUM) + ADD_NUM;

}

int main(){
    double y;
    cout << "Enter room temperature in degrees celcius: "<<endl;
    cin >> y;
    cout << "The temperature is: " << cel_to_far(y) <<"F" <<endl;
    return 0;

}

// 5. Write a function that converts Fahrenheit to Celsius.

#include <iostream>
using namespace std;

double far_to_cel(double y) {
    const int SUB_NUM = 32;
    const double DIV_NUM = 1.8;
    return (y - SUB_NUM) / DIV_NUM;

}

int main(){
    double y;
    cout << "Enter room temperature in Fahrenheit: "<<endl;
    cin >> y;
    cout << "The temperature is: " << far_to_cel(y) <<" degrees" <<endl;
    return 0;

}

// 6. Calculate the area of a rectangle.
#include <iostream>
using namespace std;

double area_of_rec(double l, double w){
    return l*w;
}

int main(){
    double l = 23.0;
    double w = 25.4;
    cout << "The area is: " << area_of_rec(l,w) << endl;
    return 0;

}

// 7. Calculate the perimeter of a rectangle.
#include <iostream>
using namespace std;

double peri_of_rec(double l, double w){
    return (2 * l) + (2 * w);
}

int main(){
    double l = 23.0;
    double w = 25.4;
    cout << "The perimeter is: " << peri_of_rec(l,w) << endl;
    return 0;

}

// 8. Calculate the area of a circle using a constant PI.
#include <iostream>
using namespace std;

double area_of_circle(double r){
    const double PI = 3.142;
    return PI * r * r;
}

int main(){
    double r;
    cout << "Enter a number: ";
    cin >> r;
    cout << "Area is: " << area_of_circle(r) << endl;
    return 0;
}

// 8. Create a function that returns the larger of two numbers.
#include <iostream>
using namespace std;

int comparision(int x, int y){
    if (x > y){
        return x;
    }
    return y;
}

int main(){
    int x = 54;
    int y = 2345;
    cout << "The greator number is: " << comparision(x, y) << endl;
    return 0;
}


// 9. Create a function that returns the smaller  of two numbers.
#include <iostream>
using namespace std;

int comparision_less(int x, int y){
    if (x < y){
        return x;
    }
    return y;
}

int main(){
    int x = 54;
    int y = 2345;
    cout << "The lessor number is: " << comparision_less(x, y) << endl;
    return 0;
}

// 10. Ask for the radius of a sphere and calculate its volume.
#include <iostream>
using namespace std;

double volume(int r){
    const double PI = 3.142;
    return (PI * r * r * r * 4)/ 3;
}

int main(){
    int r;
    cout <<"Enter radius of a sphere: " << endl;
    cin >> r;
    cout << "The volume of the sphere is: " << volume(r) << endl;
    return 0;
}
