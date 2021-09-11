#include<bits/stdc++.h>
using namespace std;
//#define int long long
int ways(int n)
{
    //base case
    if (n==1||n==2)
    
   return n;
    int ans=0;
    //single
    ans+=ways(n-1);

    //paired
    ans+=((n-1)*ways(n-2));
    return ans;
    
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        t--;
    int n;
    cin>>n;
    cout<<ways(n);
    }
    return 0;
}