#include<iostream>
using namespace std;

void allindexe(int arr[],int n,int i,int x)
{
    if(i==n)
    return;
    if(arr[i]==x)
    cout<<i<<" ";
    allindexe(arr,n,i+1,x);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    allindexe(arr,n,0,x);
    return 0; 
}