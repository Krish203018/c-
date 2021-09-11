#include<iostream>
using namespace std;
int power(int x,int n)
{
    if (n==0)
    {
        return 1;
    }
    if (n==1)
    {
        return x;
    }
    int y = power(x,n-1);
    return x*y;
}
int main()
{
    int x;
    cout<<"entr the base value"<<endl;
    cin>>x;
    int n;
    cout<<"emter the power"<<endl;
    cin>>n;
    cout<<"your answer";
  cout<<  power(x,n);
}