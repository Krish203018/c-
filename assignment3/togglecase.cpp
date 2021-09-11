#include<bits/stdc++.h>
using namespace std;
void toggle(string &str)
{
    int n=str.length();

    for (int i = 0; i < n; i++)
    {
        if (str[i]>='a'&&str[i]<='z')
        {
          str[i]=str[i]-32;
        }
        else if (str[i]>='A'&&str[i]<='Z')
        {
           str[i]=str[i]+32;
        
        }
    
 }
}
int main()
{
   string str ; 
    getline(cin,str);
 toggle(str);
  cout<<str;
    return 0;
}