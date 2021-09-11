#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    int b;
    a=(n/10)*10;
    cout<<a;
    b=a+10;
     if (n-a>=b-n)
     {
        cout<<b;
     }
     else
     {
         cout<<a;
     }
     
}