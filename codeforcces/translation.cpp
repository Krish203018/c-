#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    //cout<< s<<endl<<t;
   reverse(t.begin(),t.end());
   if(s==t)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO";
   }
   

    
}