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

// 9. Create a function that returns the larger of two numbers.
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


// 10. Create a function that returns the smaller  of two numbers.
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

// 11. Ask for the radius of a sphere and calculate its volume.
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

// 12. Write a function that converts minutes into seconds.

#include <iostream>
using namespace std;

double mins_to_sec(int r){
    const double SEC_IN_MINS = 60;
    return r * SEC_IN_MINS;
}

int main(){
    int r = 26;
    cout << "There are " << mins_to_sec(r)<< " in " << r <<" minutes." << endl;
    return 0;
}


// 13. Write a function that converts hours into minutes

#include <iostream>
using namespace std;

double hours_to_mins(int r){
    const double MINS_IN_HOURS = 60;
    return r * MINS_IN_HOURS;
}

int main(){
    int r = 26;
    cout << "There are " << hours_to_mins(r)<< " minutes in " << r <<" hours." << endl;
    return 0;
}

// 14. Calculate the Body Mass Index (BMI).

#include <iostream>
using namespace std;

double bmi(double weight, double height){
    return weight / (height * height);
}

int main(){
    double weight = 45.7;
    double height = 153;
    cout << "The bmi is: " << bmi(weight, height) << endl;
    return 0;
}

// 15. Calculate the average of three numbers.
#include <iostream>
using namespace std;

double average(double num_1, double num_2, double num_3){
    return (num_1 + num_2 + num_3)/3;
}

int main(){
    double num_1 = 45.7;
    double num_2 = 153;
    double num_3 = 234;
    cout << "The average is: " << average(num_1, num_2, num_3) << endl;
    return 0;
}

/* 16.
Create a function that calculates simple interest.
Formula:
Interest = (P × R × T)/100
*/
#include <iostream>
using namespace std;

double simple_interest(double principle, double rate, double time){
    const int PERCENTAGE = 100;
    return (principle * rate * time)/PERCENTAGE;
}

int main(){
    double principle = 10000;
    double rate = 5;
    double time = 3;
    cout << "The simple intrest is: " << simple_interest(principle, rate, time) << endl;
    return 0;
}

/* 17.
Create a function that Calculates the compound interest.
Formula:
compound intrest = p * (1 + (r / n)) ** (n * t)
*/
#include <iostream>
#include <cmath>
using namespace std;

double compound_interest(double principle, double rate, double time, double frequency){
    double decimal_rate = rate / 100.0;
    double total_amount = principle * pow(1 + (decimal_rate / frequency), frequency * time);
    return total_amount - principle;
}

int main(){
    double principle = 10000;
    double rate = 5;
    double time = 3;
    double frequency = 12;
    cout << "The compound intrest is: " << compound_interest(principle, rate, time, frequency) << endl;
    return 0;
}

/* 18.
Write a function that converts Kenyan Shillings to USD.
Formula:
USD = Ksh/Exchange rate
*/
#include <iostream>
using namespace std;

double ksh_usd_converter(double ksh){
    double const EXCHANGE_RATE = 129.25; 
    return ksh/EXCHANGE_RATE;
}

int main(){
    double ksh = 3000000;
    cout << ksh << "ksh to USD is: " << ksh_usd_converter(ksh) << "dollars."<< endl;
    return 0;
}

/* 19.
Write a function that converts USD to Kenyan Shillings
Formula:
ksh = usd * Exchange rate
*/
#include <iostream>
using namespace std;

double usd_ksh_converter(double usd){
    double const EXCHANGE_RATE = 129.25; 
    return usd * EXCHANGE_RATE;
}

int main(){
    double usd = 600000;
    cout << usd << "USD to ksh is: " << usd_ksh_converter(usd) << "ksh."<< endl;
    return 0;
}

/* 20.
Calculate the distance travelled.
distance = speed × time

*/
#include <iostream>
using namespace std;

double distance_travelled(double speed, double time){
    return speed * time;
}

int main(){
    double speed;
    double time;
    cout << "Enter  the speed you were moving with in km/h: " << endl;
    cin >> speed;
    cout << "Enter the time you took in hours: " << endl;
    cin >> time;
    cout << "The distance traveled is: " << distance_travelled(speed, time) << "km" << endl;
    return 0;

}

/* 21.
Calculate fuel efficiency.
km/L
fuel_efficiency = distance_traveled/fuel_consumed

*/
#include <iostream>
using namespace std;

double fuel_efficiency(double distance, double fuel){
    return distance/fuel;
}

int main(){
    double distance;
    double fuel;
    cout << "Enter the distance travelled in km: " << endl;
    cin >> distance;
    cout << "Enter the fuel consumed in l: " << endl;
    cin >> fuel;
    cout << "The fuel efficiency is: " << fuel_efficiency(distance, fuel) << "km/l" << endl;
    return 0;

}

/* 22.
Write a function that calculates the circumference of a circle.
circumfrence = PI * 2 * r
*/
#include <iostream>
using namespace std;

double circumfrence(double radius){
    const double PI = 3.142;
    return 2 * PI * radius;
}

int main(){
    double radius = 32.5;
    cout << "The cicumfrence of the circle is: " << circumfrence(radius) <<endl;
    return 0;

}

/* 23.
Write a function that Calculates the surface area of a cube.
surface_area = 6 * length * length

*/
#include <iostream>
using namespace std;

double surface_area(double length){
    const int SIDES = 6;
    return SIDES * (length * length);
}

int main(){
    double length = 32.5;
    cout << "The surface area of a cube is: " << surface_area(length) <<endl;
    return 0;

}

/* 24.
Write a function that Calculates the volume of a cube.
surface_area = length * length * length

*/
#include <iostream>
using namespace std;

double volume(double length){
    return length * length * length;
}

int main(){
    double length = 32.5;
    cout << "The volume of a cube is: " << volume(length) <<endl;
    return 0;

}

/* 25.
Create a function that swaps two numbers (without using references yet).
n * n * n
*/
#include <iostream>
using namespace std;

string swap(double number_1, double number_2){
    double temp = number_1;
    number_1 = number_2;
    number_2 = temp;
    string output = "number 1 is: " + to_string(number_1) + " and the value of number 2 is: " + to_string(number_2);

    return output;
}

int main(){
    double number_1 = 125;
    double number_2 = 234;
    cout << swap(number_1, number_2) << endl;
    return 0;

}

/* 26.
Write a function that returns the cube of a number.
n * n * n
*/
#include <iostream>
using namespace std;

double cube(double number){
    return number * number * number;
}

int main(){
    double number = 125;
    cout << "The cube  of the " << number << " is: " << cube(number) << endl;
    return 0;

}