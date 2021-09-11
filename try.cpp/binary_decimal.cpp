#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Binary Value"<<endl;
    cin>>n;
    int dec_value =0;
    int base =1;
    int temp =n;  // store the number into temp variable
    while (temp)//temp null na ho jaye
    {
             int last_digit = temp%10; //452->2->5->4
             temp = temp/10;
             dec_value = dec_value+last_digit*base;
             base=base*2;

    }
    cout<< dec_value;


}