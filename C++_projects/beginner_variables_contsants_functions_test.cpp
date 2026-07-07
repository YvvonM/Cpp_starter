/*
Write a function that returns the average speed.
speed = distance / time

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