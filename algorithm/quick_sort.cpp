/*
quick sort selects the pivot which is median of three 
sort the pivot as (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot
*/
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t= *a;
    *a =*b;
    *b=t;
}
//this selects the pivots
int partition(int arr[],int start,int end)
{
    int pivot=arr[end];
    int i=start-1;
    for (int j = start; j <= end-1; j++)
   { if(arr[j]<pivot)
    {
        i++;
        swap(&arr[i],&arr[j]);
    }  
   }
   swap(&arr[i+1],&arr[end]);
   return(i+1);
}
void quicksort(int arr[],int start,int end)
{

       if(start<end)
       {
    int pi=partition(arr,start,end);
  
   quicksort(arr,start, pi - 1);
    quicksort(arr,pi+1,end);
   }
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
int main()
{
   int n,arr[n];
   cin>>n;
   for (int i = 0; i < n; i++)
   cin>>arr[i];
     quicksort(arr, 0, n - 1);  
       cout << "Sorted array: \n";  
     printarray(arr, n);  
 
   return 0;
}