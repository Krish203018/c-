#include <iostream>
using namespace std;
int binary(int arr[], int n , int start, int end , int x)
{
    if (start>end)
    {
        return -1;
    }
    int mid= (start + end)/2;
    if (arr[mid]==x)
    {
        return mid;
    }
    else if (arr[mid]>x)
    {
      return  binary(arr,n,start,mid-1,x);
    }
    else
    {
        return binary(arr,n,start,mid+1,x);
    }
    
    
}
int main()
{
    int x;
    int n;
    cout<<" enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++)  //when we do i=0 the index couting will start from 0 and 
    {                              // when we do i=1 the index couting will start from 1
        cout<<" enter the "<< i << " the value"<<endl;
        cin>>arr[i]; 
    }
    cout<<"enter the element to be found"<<endl;
    cin>>x;
    cout<<"your value is found at "<<endl<<binary(arr,n,0,n-1,x)   ;
}