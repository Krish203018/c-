#include<iostream>
using namespace std;
void frequency(string &sub,string &s)
{
   int m = sub.length();
   int n = s.length();
   int count =0;
   for (int i = 0; i<=n-m; i++)
   {    int j=0;
       for ( j = 0; j < m; j++)
       
           if (s[i+j]!=sub[j])
           
               break;
           
       if (j==m)
        {   
         count++;
         j=0;
        
        }  
       
       
   }
   cout<< count;
}
int main()
{
    string s = "banana";
    string sub = "an";
    frequency(sub,s);
}