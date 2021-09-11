/*#include <iostream>
using namespace std;
void uniquenumber( int arr[],int n,int*x,int *y)
{
    int Xor =arr[0];
    int set_bit_no;
    int i;
     *x=0;
     *y=0;
     for (int i = 1; i < n; i++)
     {
        Xor^=arr[i];
        set_bit_no =Xor & ~(Xor-1);
        for (int  i = 0; i < n; i++)
        {
            if (arr[i]& set_bit_no)
            
                *x = *x ^ arr[i];
                else
                {
                    *y = *y ^ arr[i];
                }
                
            
            
        }
        
     }
     

}
int main(){
    int n;
    cin>>n;
   int  arr[n];
    for (int i = 0;i< n; i++)
    {
        cin>>arr[i];
    }

    n = sizeof(arr)/sizeof(*arr);
    int *x = new int[(sizeof(int))];
    int *y = new int[(sizeof(int))];
    uniquenumber(arr,n,x,y);
    cout<<*x<<" "<<*y;
}   */
#include<iostream>
using namespace std;

void find_unique_2_number(int *a,int n){

	int first=0,second=0;
	int res=0,temp=0,i=0,j=0;
	for(i=0;i<n;i++){
		res^=a[i];
	}

	temp = res;

	while(temp){
		if(temp & 1){
			break;
		}
		j++;
	}

	for(i=0;i<n;i++){
		int k=a[i];
		k = k>>j;
		if(k & 1){
			first^= a[i];
		}
	}

	second = first^res;
	cout<<second<<" "<<first;
}

int main(){

	int arr[1000000];
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	find_unique_2_number(arr,n);
	cout<<endl;

	return 0;
}