#include<iostream>
using namespace std;
void printminimum(string s)
{
    int curr=0;
    int last=0;
    int j;
    for (int i = 0; i < s.length(); i++)
   {
       int nextD=0;
          switch (s[i])
        {
       case 'I':
         j=i+1;
       while (s[j]=='D'&&j<s.length())
       {
           nextD++;
           j++;
       }
       if (i==0)
       {
           curr=nextD+2;
           cout << ++last;
                cout << curr;
                last=curr;
       }
       else
       {
           curr=curr+nextD+1;
           last=curr;
           cout<<last;
       }
          for (int k = 0; k < nextD; k++)
          {
              cout<<--last;
              i++;
          }
          break;
           case 'D':
       if(i==0)
       {
           j=i+1;
           while (s[j]=='D'&&j<s.length())
           {
               nextD++;
               j++;
           }
           curr=nextD+2;
           cout<<curr<<curr-1;
           last=curr-1;
       }
       else
       {
           cout<<last-1;
           last--;

       }
       break;
       }
      
       
    }
    cout<<endl;
}
int main()
{
    int n;
    string s;
    cin>>n;
    while (n--)
    {
        cin>>s;
          printminimum(s);
    }
  
}