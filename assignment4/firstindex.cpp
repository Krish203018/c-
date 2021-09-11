#include <iostream>
using namespace std;
 
 void first(int arr[],int n,int i,int x)
 {
     if(i==n)
     {
   cout<<-1<<endl ;
     return;
     }
     if(arr[i]==x)
     {
         cout<<i<<" ";
     return;
     }
     first(arr,n,i+1,x);
 }
int main()
{
	int n ;
	cin>>n;
    int arr[n] ;
    for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int x;
    cin>>x;
 
   /* int elem ;
    cin>>elem;
    int i = 0;
    while (i < n)
    {
        if (arr[i] == elem) {
            break;
        }
        i++;
    }
 
    if (i < n) {
        cout <<  i;
    }
    else {
        cout<< "-1";
    }*/
     first(arr,n,0,x);
    return 0;
}