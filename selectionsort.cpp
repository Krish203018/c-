#include <iostream>
using namespace std;

int main()
{
int n,i,min_index;
cin >> n;
int arr[n];
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
for ( i = 0; i < n-1; i++)
{
    int min_index = i;
    for (int j = i+1; j<n; j++)
    {
        if (arr[j]<arr[min_index])
        {
            min_index=j;
        }
        
    }
    if (min_index!=i)
    {
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
    
   cout<<arr[i] <<" ";

}
 
return 0;
}
