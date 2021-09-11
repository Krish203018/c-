#include<iostream>
using namespace std;
void moveAllX(string s,int i,int size)
{
 if (i>=size)
 
     return;
 
   char curr=s[i];
   if (curr!='x')
   
       cout<<curr;
   
   moveAllX(s,i+1,size);
  if (curr == 'x')
  
      cout<<curr;
      return;
  
     

}
int main()
{
    string s;
    cin>>s;
     int size = s.length();
  moveAllX(s,0,size);
  return 0;
}