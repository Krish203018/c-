//task is array sorted or not 
//problem in 18 line why it giving error nd please 43 line it is correct or not   
#include<iostream>
using namespace std;
bool sorted(int arr[],int i,int n)
{
    if (i==n-1)
    {
        return true;
    }
    bool chhotabracket= sorted(arr,i+1,n);
    if (chhotabracket== false)
    {
        return false;
    }
    else
    {
       if (arr[i]<=arr[i+1])
       {
           return true;
       }
       else
       {
           return false;
       }
       
    }
    
}
int main()

{
    int i;
    int n;
    cout<<"give the size of your array ";
    cin>>n;
    int arr[n];
    for (int  i = 0; i<n; i++)
    {
       cout<<"enter the"<< i<<"number";
       cin>>arr[i];
    }
    if (sorted(arr,0,n)==true)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
}