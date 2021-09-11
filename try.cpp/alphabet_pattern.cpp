#include<iostream>
using namespace std;
int main()
{
    //char a = 'A';
    int n =5;
    for (int i = 1; i <= n; i++) //row print 
    {
        char a = 'A';
        for (int j = 0; j<i; j++) //row me kya print krana hai
        {
            cout<<a<<" ";
          //  a =a+1;
        }
        a=a+1;
        cout<<endl;
    }
    
}