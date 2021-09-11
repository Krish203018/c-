#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[][n]={ { 4, 5, 6, 8 },{ 1, 2, 3, 1 },{ 7, 8, 9, 4 },{ 1, 8, 7, 5 } };
  
    for (int i = 0; i < n; i++)
    {
       cout<<arr[0][i]<<" "; 
    }
   
    int sapce = n-2;

     int i=1,j=n-2;