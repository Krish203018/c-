#include<iostream>
using namespace std;
int main()
{
    int num ;
    cin>>num;
    int dec_val=0;
    int base=1;
    int temp=num;
    while (temp)
    {
      int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_val = dec_val + last_digit * base;
 
        base = base * 2;
       
    }
     cout<<dec_val;

   
}