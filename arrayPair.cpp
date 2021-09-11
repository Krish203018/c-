#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    int n;
     cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <=n-2; j++)
        {
            if (arr[j]>arr[j+1])
            {
               int temp= arr[j];;
               arr[j]=arr[j+1];
               arr[j+1]=temp;
             
            }
            
        }
        
    }
    
     int start=0;
     int end=n;
     int x;
     cin>>x;
     while(start<end)
     {
         int sum=arr[start]+arr[end];
         if (sum==x)
         {
             cout<<arr[start]<<" and "<<arr[end]<<endl;
             start++;
             end--;
         }
         else if(sum>x)
         {
             end--;
         }
         else
         {
             start++;
         }
         
         

     }
    
}   