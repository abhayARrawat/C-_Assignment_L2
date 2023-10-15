/*WAP to find the difference between ASCII of two 
characters ,take them as input*/
#include <iostream>
using namespace std;
int main(){
    char ch1;
    cout << "Enter 1st character : ";
    cin >> ch1;
    char ch2;
    cout << "Enter 2nd character : ";
    cin >> ch2;
    cout << (int)ch1 - (int)ch2;
    return 0;
}