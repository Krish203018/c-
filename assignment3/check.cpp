#include<iostream>
using namespace std;

int search(int *ar, int n)
{
    int x;
    cin>>x;
	int f = 0 ;  // <---- a flag variable to tell us if the element is ever found in the array  

       for (int i = 0; i < n; i++)
       {
           if (x==ar[i])
           {
               cout<<i;
			   f=1 ; 
           }
        
       
           
           
       }
	   if(f==0) //<------- print -1 if the number is not in the array 
	   	cout<<-1<<endl;
       return x;
}

void binary_search(int *ar, int n)
{
    int x;
    cin>>x;

    int start = 0 ;
    int end = n ; 

    while(start<=end){

        int mid = (start + end) / 2 ; //<---- middle index 

        if(ar[mid]==x){ //<----- element found 
            cout<<mid<<endl;
            return ;
        }
        else if( ar[mid] < x ){ //<---- element is present in the right half of the array 
            start = mid + 1 ; 
        }
        else
            end = mid-1 ;  // <---- element is present in the left half of the array 
        


    }

    cout<<-1<<endl;

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
