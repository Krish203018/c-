#include<iostream>
using namespace std;
int triangle(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 3;
    }
   int k=triangle(n-1);
    return n;// k hai tera sub problem addition or jo tera ka hai base case
}
int main()
{
    int n;
    cin>>n;
   cout<<triangle(n);

}