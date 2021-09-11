#include<iostream>
using namespace std;
int ways(int n)
{
    if (n==1||n==2)
    
        return n ;
    
    if (n==3)
    
        return 4;
    
    return ways(n-1)+ways(n-2)+ways(n-3);
}
int main()
{
    int n;
    cin>>n;
    cout<<ways(n);
}