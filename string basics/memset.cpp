#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[1000];
    cout<<"+91 - ";
    cin>>s;
    cout<<" OTP has been sent to this number"<<endl;
    memset(s,'*',7);
    cout<<s;

}