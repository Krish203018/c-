#include<iostream>
using namespace std;
void heapify(int n,int arr[],int i)
{
int largest=i;
int left= 2*i+1,right=2*i+2;
//if left one is bigger
if(left<n&&arr[left]>arr[largest])

    largest=left;

//if right one is bigger
if(right<n&&arr[right]>arr[largest])

    largest=right;

//if largest is not root
if(largest!=i){

    swap(arr[i],arr[largest]);

heapify(n,arr,largest);
}
}
void heapsort(int arr[],int n)
{
    //rearrange array or building the array
    for (int i = n/2-1;i>=0; i--)
      heapify(n,arr,i);
      //taking largest element from heap
      for ( int i = n-1; i >0; i--){
      
          swap(arr[0],arr[i]);
    heapify(i,arr,0);
      }
}
void printarray(int arr[],int n)
{
    for (int i = 0; i<n; ++i)
    
        cout<<arr[i]<<" ";
    
    
}
int main()
{
    int n,arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    cin>>arr[i];  
    heapsort(arr,n);
     cout << "Sorted array is \n";
    printarray(arr,n);
}