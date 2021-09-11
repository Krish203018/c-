#include<iostream>
using namespace std;
void check(int n)
{
    int count =0;
    for(int i = 1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        cout<<n;
    }
    
}
int main()
{
    int lower,  upper ;
    cin>>lower>>upper;
    for (int i = lower; i <=upper; i++)
    {
       check(i);
    }
    return 0;
}