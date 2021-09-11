#include<bits/stdc++.h>
using namespace std;
int j=0;//keep count of permutation
void permutate(string &s,int i,string arr[])
{
   int n=s.length();
   if(i==n)
   {
       arr[j]=s;
       j++;
       return;
   }
   for(int j=i;j<n;j++)//trying all characters
  { swap(s[i],s[j]);
   permutate(s,i+1,arr);
   swap(s[i],s[j]);
   }
}
int main()
{
    string s;
    cin>>s;

    string t;
    t=s;
    string arr[1000];
    permutate(s,0,arr+j);
    sort(arr,arr+j);
    for (int i = 0; i < j; i++)
     {   if(arr[i]==t)
        break;
     cout<<arr[i]<<endl;
     }
}