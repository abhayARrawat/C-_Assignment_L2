//Find the output of the below code
#include <iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6 + 9 )% 100 ;
cout<<i;
}
/*
left to right solution
4 + 1 * 6 * 6 + 9
4 + 6 * 6 + 9
4 + 36 + 9 = 49
then 
49 % 100 = 49 
because 49 chota hai 

*/