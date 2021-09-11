//Actually i want to divide a number by 4 without using divide(/)operaor
// confusion in 10 line not able to udersatnd these operators << and >> properly and what is happening when 
//we use this < and >.
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   n= n>>3 ;  // << this will multiply two times and >> this will divide by two times
   cout<<n;
}