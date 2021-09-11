#include<iostream>

using namespace std;
void bubblesort(int *x,int n )
{      
    for (int  start = 0; start < n-1; start++)
    {
        for (int inner = 0; inner < n-2; inner++)
        {
            if (*(x+inner) > *(x+inner+1))
            {
                int temp= *(x+inner);
                *(x+inner)= *(x+inner+1);
                  *  (x+inner+1)= temp;
            }
            
        }
        
    }
    

} 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}