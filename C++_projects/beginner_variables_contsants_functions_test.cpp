/*
Create a function that returns the area of a triangle.
area = (base * width)/2
*/
#include <iostream>
using namespace std;

double area(double base, int height){
    return (base * height)/2;
}

int main(){
    double base, height;
    cout << "Enter base of the triangle: " << endl;
    cin >> base;

    cout << "Enter height of the triangle: " << endl;
    cin >> height;

    cout << "Area of the triangle is: "  << area(base, height);
    return 0;

}