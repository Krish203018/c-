// 5 -> 1 2 3 4 5 =15
#include<iostream>
using namespace std;
int main()
{
    int n;  //array ka size
    cin>>n; //user se array ka size
    int arr[n] ; //user ke size ka array
    for (int i = 0; i < n; i++)  //loop size tk ka
    {
        cin>>arr[i]; //har position ke value de rha h
    }
   // int n = sizeof(arr)/sizeof(int);
    int sum = 0; //sum ko initialize 
    for (int i = 0; i < n; i++) //array ke har ko index ko pluse kr rhe
    {
        sum += arr[i]; //sum =sum +arr[i]
    }
    cout<<sum; //sum ko print krwa dia
}