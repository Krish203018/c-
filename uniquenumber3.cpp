/*#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define pb push_back
#define vi vector<int>
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;
int main() {
				fast
			
				ll n;
				cin>>n;
				ll arr[n];
				ll id[64]={0};
			
				for(ll i=0;i<n;i++)
				{
					cin>>arr[i];
					ll j=0;
					while(arr[i])
					{
						if(arr[i]&1)
						id[j]++;
						j++;
						arr[i]>>=1;
					}
				}
				ll ans=0;
				for(ll i=0;i<64;i++)
				{
					ans+=((id[i])%3)*(1<<i);
				}
				cout<<ans;
				
				
				
				
				
	return 0;
}*/
#include<iostream>
using namespace std;
int finduniquenumber(int *a,int n)
{
 int cnt[64]={0};
 for(int j=0;j<n;j++)
 { 
     int i=0;
	 int no=a[j];
	 while (no>0)
	 {
		 cnt[i]+= (no&1);
		 i++;
		 no=no>>1;
	 }
	 
 }
 int p=1;int ans=0;
 for (int i = 0; i < 64; i++)
 {
	 cnt[i] %=3;
	 ans = ans+cnt[i]*p;
	p= p<<1; 
 }
 return ans;
}
int main()
{
int ar[]={2,2,2,4,4,5,5,5,6};
int n = 7;
cout<<finduniquenumber(ar,n);
return 0;
}
