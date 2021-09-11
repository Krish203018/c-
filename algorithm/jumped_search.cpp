#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int jumpsearch(int n,int x,int arr[])
{//this step will give the give the info how many steps to be jumped
    int step=sqrt(n);// best step size is m = √n
    int start =0;
    while(arr[min(step,n-1)]<x)
  {  start=step;
    step+=sqrt(n);
    if(start>=n)
   return -1;
  }
   //now we have found the interval in which our x lies
   //So to find the X we have to perform linear search
   while(arr[start]<x)
   {start++;
   //if element is not present
  if(start==min(step,n)) //this step is not mandatory
   return -1;
   }
   //if we got the element
   if(arr[start]==x)
   return start;
   return -1;
}
int main()
{
    int n,arr[n],x;
    cin>>n;
    for (int i = 0; i < n; i++)
   { cin>>arr[i];}
   cout<<"the value to be found"<<endl;
    cin>>x;
   cout<<jumpsearch(n,x,arr);
   return 0;
}