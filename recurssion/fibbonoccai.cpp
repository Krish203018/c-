#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==0);
    return n;
   
    
     return (fib(n-1)+fib(n-2));
    
    
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) { 
       cout<< fib(i); 
    } 
    cout<<fib(n);
    return 0; 
}