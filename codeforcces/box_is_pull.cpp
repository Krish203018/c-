/*#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[4];
    while (t--)
    {
      for (int  i = 0; i < 4; i++)
    {
       // cout<<"the"<<i<<"number";
        cin>>a[i];
       
    }
    int count=0;
    if (a[0]!=a[2]&&a[1]!=a[3])
    {
        a[0]++;
        a[3]++;
        count++;
    }
    
    if(a[0]==a[2]&&a[1]==a[3])
    {
        cout<<count;
    }
    }
    
    
    

}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if(a-x==0)
        {
            cout<<abs(b-y)<<endl;
        }
        else if (b-y==0)
        {
            cout<<abs(b-y)<<endl;
        }
        else
        {
            cout<<abs(a-x)+1+abs(b-y)+1<<endl;
        }
        
    }
    

}