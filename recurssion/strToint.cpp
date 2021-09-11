#include<bits/stdc++.h>
using namespace std;
int toInt(string s, int last)   //last is the size of your string
{
    if (last==0)
    {
        return s[last] - '0';
    }
    int x = toInt(s, last-1);
    return x*10 + s[last] - '0';
}
void toint(string s,int i,int &ans )
{
    int n = s.length();
   if (i==n)
   {
       return;
   }
   ans = ans*10 + (s[i]-'0');
   toint(s,i+1,ans);

   
}
int main()
{
    int last;
    string s ;
    int ans =0;
    cout<<" enter the string"<<endl;;
    cin>>s;
    cout<<" please enter the size of your string"<<endl;
   cin>>last;
  cout<<toInt(s,last)<<endl;    //here last means the size of your string
   cout<<"from right to left"<<endl;
    toint(s,0,ans);
    cout<<ans;
}