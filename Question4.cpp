/*WAP for finding the volume of the cylinder by taking 
radius and height as input.*/
#include <iostream>
using namespace std;
int main(){
    int r;
    cout << "Enter Radius : ";
    cin >> r;
    int h;
    cout << "Enter Height : ";
    cin >> h;
    float pi = 3.1415;
    float v = pi * r * r * h;;
    cout << "Volume of cylinder is : "<<v;
    return 0;
}