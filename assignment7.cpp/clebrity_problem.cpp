#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int arr[n][n];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cin>>arr[i][j];
      }
      
   }
   stack<int>s;
   for (int i = 0; i < n; i++)
   {
      s.push(i);
   }
   while (s.size()>1)
   {
      int a=s.top();
      s.pop();
      int b= s.top();
      s.pop();
      if (arr[a][b]==1)
      {
          s.push(b);
      }
      else
      {
          s.push(a);
      }
      
   }
   bool celeb=true;
   int a=s.top();
   for (int i = 0; i < n; i++)
   {
       if (i!=a&&(arr[a][i]==1||arr[i][a]==0))
       {
           celeb =false;
           break;
       }
       
   }
   if (celeb==true)
   {
      cout<< a << endl;
   }
   else
   {
       cout<<"No Celebrity"<<endl;
   }
   
   
}