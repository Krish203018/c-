// a = 4 , b= 5 equal a=5 b =4 without using extra variable
#include<iostream>
using namespace std;
int main()
{
   int a = 4;
   int b= 5;
   a= a+b; // a = 4 b = 5  a+b = 9  a=9
   b = a-b;
   a = a-b;
   cout<<a<<" "<<b;
}
