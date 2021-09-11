#include<iostream>
using namespace std;
void printNGE(int arr[],int n )
{
    int next;
    for (int i = 0; i < n; i++)
    {
        next = -1; //if not find greater value then print -1

        for (int j = i+1; j<n; j++)
        {
            if (arr[i]<arr[j])
            {
                next = arr[j];
                break;
            }
            
        }
        cout<<next<<" ";
    }
    
}
int main()
{
    int arr[] = {5,7,3,8,2};
    int n = sizeof(arr)/sizeof(int);
     printNGE(arr,n);
}