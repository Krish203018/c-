#include<iostream>
using namespace std;
int arraysortedOrNot(int arr[],int n)
{
    //basse case
    if(n==0||n==1)
    {
        return 1; 
    }
    //sub problem
    if (arr[n-1]<arr[n-2])//this is checking for unsorted pair. 
    {
        return 0;
    }

    return arraysortedOrNot(arr,n-1);
    
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
    //cout<<arraysortedOrNot(arr, n);
    if (arraysortedOrNot(arr, n))
        cout << "true\n";
    else
        cout << "false\n";
}