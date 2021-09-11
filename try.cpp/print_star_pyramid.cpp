#include<iostream>
using namespace std;
int main()
{
    // loop for  or   while
    int n;
    cin>>n;
    for (int row = 1;row <=n;row++)   //for (variable,condition,depedency)
    {
         for(int star =1 ;star<=row;star++)
      {  cout<<"*";}
    
     cout<<endl; // line break
    }
}