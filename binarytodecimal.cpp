/*#include<iostream>
using namespace std;
int main()
{
    int num ;
    cin>>num;
    int dec_val=0;
    int base=1;
    int n;
    int temp=n;
    while (temp)
    {
        for(int i=0;i<=num;i++)
        {
      int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_val = dec_val + last_digit * base;
 
        base = base * 2;
        }
       
    }
     cout<<dec_val;

   
}*/
// C++ program to convert a decimal 
// number to binary number 

#include <iostream> 
using namespace std; 

// function to convert decimal to binary 
void decToBinary(int a[],int n) 
{ 
	// array to store binary number 
	int binaryNum[32]; 

	// counter for binary array 
	int i = 0; 
	while (n > 0) { 

		// storing remainder in binary array 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 

	// printing binary array in reverse order 
	for (int j = i - 1; j >= 0; j--) 
		cout << binaryNum[j]; 
} 

// Driver program to test above function 
int main() 
{ 
	int n ;
  cin>>n; 
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  

   decToBinary(a,n); 
	return 0; 
} 
