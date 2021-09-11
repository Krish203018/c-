#include<bits/stdc++.h>
using namespace std;
bool suma(int n ,int arr[],int sum)
{
    int l,r;

    sort(arr,arr+n);
    l=0;
    r=n-1;
    while(l<r)
    {
        if (arr[l]+arr[r]==sum)
        {
             cout<<arr[l]<<" and "<<arr[r];
             return 1;  }     
        else if (arr[l]+arr[r] < sum)
        
            l++;
        
        else
        
            r--;
              
    }
    return 0;
}
int main()
{
    int arr[] =  { 1, 4, 45, 6, 10, -8 };
    int n = sizeof(arr)/sizeof(int);
    int x = 16;
  if (suma(n,arr,x))
        cout << "Array has two elements"
                " with given sum";
    else
        cout << "Array doesn't have two"
                " elements with given sum";
 
    return 0;
    
}
