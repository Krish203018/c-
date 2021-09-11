#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[10000];
    int count =2;

    for (int i = 0; i <= n; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i <= n-1; i++)
    {
         if (a[i]!=a[i+1])
         {
              count++;
         }
           
      
    }
    cout<<count; 
}
