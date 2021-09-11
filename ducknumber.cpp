#include<iostream>
using namespace std;
bool check(string num)
{
    int i=0,n=num.length();
    while (i<n && num[i]=='0')
    
       i++;
    while (i<n)
    {
        if (num[i]=='0')
        return true;
        i++;
    }
    return false;
    
}
int main(void)
{
   string num;
   cin>>num;
   if (check(num))
   
     cout<<"duck";
   
    else
    
        cout<<" lalala";
    
    
  
   
}