#include<iostream>
using namespace std;
void leader(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {   int j;
        for (j = i+1; j < n; j++)
        {
           if (arr[i] < arr[j])
           {
               break;
           }
           
        }
        if (j==n)
        {
            cout<<arr[i];
        }
        
    }
    
    
}
int main()
{
    int arr[]= {1,2,3,4,0};
    int n = sizeof(arr)/sizeof(int);
    leader(arr,n);
}