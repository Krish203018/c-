#include<iostream>
using namespace std;
int ways(int i,int j)
{
    if (i==0&&j==0)
    
        return 1;
    
    if(i<0|| j<0)

       return 0;
  return  ways(i-1,j)+ways(j-1,i);
    
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<ways(n-1,m-1);
}