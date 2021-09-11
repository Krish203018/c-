#include<iostream>
using namespace std;
int missingnuber(int ar[],int n)
{
    int j;
    cout<<"formula "<<endl;
   cin>>j;
    int total = j;
    for (int i = 0 ; i < n; i++)
    {
       total -= ar[i];
    }
    return total;
    
}
int main()
{
 int n;
 cout<<"enter the number of elements in sequence "<<endl;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
     cout<<" enter the elements"<<endl;
     cin>>arr[i];
 }
 int miss = missingnuber(arr,n);
 cout<<miss;
}