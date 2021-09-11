// task - to find element preent in array or not
//problem - not working for element which is not present in array  
#include<iostream>
using namespace std;
bool check(int arr[],int n,int i,int x)
{
   
   if (i==n)
   {
    return false;
   }
   if(arr[i]==x)
   {
       return true;
   }
   return check(arr,n,i+1,x );

}
int main()
{
    int n;
      cout<<"give the size of array"<<endl;
    cin>>n;
    
    int arr[n];
   
    for (int  i = 0; i < n; i++)
    {
      cout<<"enter the value"<<i<<endl;
        cin>>arr[i];
    }
      int x;
    cout<<"enter the element to be checked"<<endl;
    cin>>x;
    if (check(arr,4,0,x)==true)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"nope";
    }
    

}