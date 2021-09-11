#include<bits/stdc++.h>
using namespace std;
int eggdrop(int n,int k)
 {   //base
  //   if(n==0||n==1)
  //   return n;
 
  // if (k==1)
  // return n;
  //TRY ALL FLOOR
   int ans=INT_MAX;
  for (int i = 1; i <= n; i++)
  {
     int break1=eggdrop(i-1,k-1);
     int notbreak = eggdrop(n-i,k);
     int v = max(break1+1,notbreak+1);//ith floor se fekne ke atempt ko consider krne ke lie +1 kia h4
   ans= min(ans,v);
  }
  return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<eggdrop(n,k);
    return 0;
}