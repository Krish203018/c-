#include<iostream>
using namespace std;
void english(int n, string arr[])
{
    if (n==0)
    {
        return;
    }
    int x = n%10;
    english(n/10,arr);
    cout<<x<< "is"<<arr[x]<<endl;;
    
}
int main()
{
    string arr[]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
   int n;
   cin>>n;
   english(n,arr);
}