#include<iostream>
using namespace std;
int search(int *ar, int n)
{
    int x;
    cin>>x;
    int f=0;
       for (int i = 0; i < n; i++)
       {
           if (x==ar[i])
           {
               cout<<i;
               f=1;
           }
        
       
           
           
       }
       if (f==0)
       {
           cout<<-1<<endl;
       }
       
       return x;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
      search(ar , n)   ;
}
