//Ask for the radius of a sphere and calculate its volume.
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