#include <iostream> 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int  i = 1; i < n; i++)
    {
        int hand =arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>hand)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=hand;
          
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
    
}