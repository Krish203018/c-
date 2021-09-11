#include<iostream>
using namespace std;
//function to rorate the arravy elements by one
void rotate(int arr[],int n)
{
  int temp=arr[0],i;
  cout<<"value of temp"<<temp<<endl;
 for ( i = 0; i < n-1; i++)
 
   arr[i]=arr[i+1];
   arr[i]=  temp;  
   cout<<"after temp"<<temp<<endl;
}
//function to rotae the arrays element by d times
void leftrotate(int arr[],int d,int n)
{
  for(int i=0;i < d;i++)
  
   rotate(arr,n); 
  
}
//function to print array
void Printarray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
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
   int d;
   cin>>d;
   //from which value the array should rotate
   
  // int size = sizeof(arr)/sizeof(arr[0]);
  leftrotate(arr,d,n);
  Printarray(arr, n);
}