// 1 2 3 4 5 -> 5 4  3  2 1 
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1 , 2 , 3,  4,6 }; //array bnaya
    int n = sizeof(arr)/sizeof(int); //size nikal lia
    for (int i = n-1; i >=0 ; i--) // i=n-1 
    {
        cout<<i<<"th Value"<<endl;
        cout<<arr[i]<<endl;
    }
}
