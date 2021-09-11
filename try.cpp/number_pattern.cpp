#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    char a = 'A';
    for (int row = 1; row<=n; row++)
    {
        int num =1;
        for (int i = 0; i < row; i++)
        {
            cout<<num<<" ";
            num=num+1;
        }
         num = num +1;
        cout<<endl;
       
    }
    for (int row = 1; row<=n; row++)
    {
        for (int i = 0; i < row; i++)
        {
            cout<<a<<" ";
            a=a+1;

        }
        cout<<endl;
       
    }
}