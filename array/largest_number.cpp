#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,8,5,4};
    int n = sizeof(arr)/sizeof(int);
    int temp =0;
    for (int i = 0; i < n; i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
        }
    }
    cout<<temp;
}
