#include<iostream>
using namespace std;


int sorting(int n)
{
  
    int ar[n];
    
      
    
    for (int i=0; i<=n;i++)
     cin>>ar[i];
    {
          
           
             for (int j = 0; j <= n-2; j++)
             {
                 if (ar[j]>ar[j+1])
                 {
                     int temp = ar[j];
                     ar[j]=ar[j+1];
                     ar[j+1]=temp;
                     
                 }
                 
             }
             
    } for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    return 0;

}
int sumPair(int n)
{
    int start = 0;
    int end=n-1;
    int sum;
    cout<<"which sum of pair need to found?";
    int x;
    cin>> x;
    for (int i = 0; i <=n-1; i--)
    {
        for (int j = 0; j < i; j++)
        int ar[0];
        int ar[i-1];
        int sum = ar[0]+ar[i-1];
        {
            if (sum == x)
            {
                cout<<ar[0]<<ar[i-1];
            }
            else
            {
                sum++;
            }    
        }
         
    } return sum; 
}
int main(){
    int n;
    cin>>n;
    int ar[]={5,8,9,0,5};
    //int a = sorting(n); 
   // cout<< sorting<<endl;
    cout<<sumPair<<endl;
    return 0;
}