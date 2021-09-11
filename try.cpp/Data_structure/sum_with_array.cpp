// 5 -> 1 2 3 4 5  sum = 6 
// (1,5) (2,4) 
// 8,5,7,2,3 sum =12
// (5,7)
// 2 3 5 7 8  = 10 11 13 12
#include<iostream>
using namespace std;
void pairs(int arr[],int n,int x) // void
{
 for(int i = 0;i<n;i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==x)
            {
                cout<<arr[i]<<"and"<<arr[j];
            }
            
        }
    }
}
int main()
{
    int arr[]= {8,5,7,2,3}; //empty bar
    int n = sizeof(arr)/sizeof(int);//arr[0] size dia
    int sum = 12;  //sum pair
    pairs(arr,n,sum); //click
}