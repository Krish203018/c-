#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (true)
    {
        n++;
        //ye code alag kr rha h sbhhi digits ko
        int a=n/1000; //cout<<a<<" ";
        int b= n/100%10;// cout<<b<<" ";
        int c=n/10 %10; //cout<<c<<" ";
        int d= n%10; //cout<<d<<" ";
    
    //ye check kr rha hai sbhi digits ko 
    if (a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
    {
        
        break;
       

    
    }
    
    }
    cout<<n<<endl;
}