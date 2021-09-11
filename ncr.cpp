#include<iostream>
using namespace std;
int fact(int n)
{
    int ans  =1;
    for (int i = 1; i <= n; i++)
    {
       ans=ans*i;
    }
    return ans;
}
int ncr(int n ,int r){
    int nfact = fact(n);
    int n_rfact = fact(n-r);
    int rfact = fact(r);
    int ans = nfact/(n_rfact*rfact);
    return ans;
}
int main()
{
int n ;
cin>>n;
int r;
cin>>r;
cout<<ncr(n,r);
return 0;
}