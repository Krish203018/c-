#include<bits/stdc++.h>
using namespace std;
void findTriplet(int arr[],int n)
{   
    int count =0;
    sort(arr,arr+n);
    for (int i = n-1; i>=0; i--)
    {
        int j=0;
        int k = i-1;
        while (j<k)
        {
            if(arr[i]==arr[j]+arr[k])
            {
                count++;
                return;
            }
            else if(arr[i] > arr[j]+arr[k])
                j+=1;
            else
                k-=1;
        }
         cout<<count;
    }
   cout<<"no triplet";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    findTriplet(a,n);
}