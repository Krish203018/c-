#include<iostream>
using namespace std;
void reverse(string str)
{
    int i =0;
    int n= str.length();
    for ( i = n-1; i >= 0; i--)
  
      cout<<str[i];    
    
    
}
int main()
{
string str;
getline(cin,str);
reverse(str);
}