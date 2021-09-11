#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  chek_sub(int n,int sum,int arr[])
{
    int curr_sum,i, j;
    for ( i = 0; i < n; i++)
     { curr_sum = arr[i];
       for (  j = i+1; j <=n; j++)
        {
            if(curr_sum == sum)
            { cout<<i<<" "<<j-1;
              return 1;
            }
        
            if(curr_sum>sum ||j==n)
               break;
            curr_sum =curr_sum+ arr[j];

       }
    }
    cout<<"No subarry Found";
    return 0;
}
int main()
{
   int n;
   cin>>n;
   int s;
   cin>>s;
   int arr[n];

   for (int  i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   chek_sub(n,s,arr);
}