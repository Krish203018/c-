#include<iostream>
using namespace std;
int main()
{
    int num ;
    cin>>num;
    int dec_val=0;
    int base;
    int temp=num;
    while (temp)
    {
      int last_digit = temp % 8;
        temp = temp / 8;
 
        dec_val = dec_val + last_digit * base;
 
        base = base * 8;
       
    }
     cout<<dec_val;

   
}