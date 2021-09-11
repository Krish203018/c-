#include<iostream>
using namespace std;
int interpolitan(int n,int arr[],int x)
{
    int start=0,end=n-1;
    while(start<=end&&x>=arr[start]&&x<=arr[end])
    {
        if(start==end)
        if (arr[start]==x)
        {
            return start;
            return -1;
        }
        //formula
        int Position = start+(((double)(end-start)/(arr[end]-arr[start]))*(x-arr[start]));
     
        //condition of target found
     if(arr[start]==x)
        return start;
        //if in x is larger
        if(arr[start]<x)
        start=end+1;
        //if xis smaller
        else
      end=start-1;
}
    return -1;
}
int main()
{
    int n,arr[n],x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
   int index = interpolitan(n,arr,x);
 
    // If element was found
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found.";
    return 0;
}