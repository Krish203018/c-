#include<iostream>
using namespace std;
int sum(int n)
{
    int add=0;
    for (int i = 0; i < n; i++)
    {
        int temp= n%10;
       n = n/10;
         add = add+temp;
   }
 return  add;
}
int main()
{
int n;
cin>>n;
cout<<sum(n);
}
