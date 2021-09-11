#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for (int i = 0; i < n*n; i++)
    {
        sum=sum+n; 
    }
    cout<<sum;
    return 0;
}