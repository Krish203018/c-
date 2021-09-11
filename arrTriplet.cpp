#include <bits/stdc++.h> 
using namespace std; 
  
// Function to print triplets with given sum 
void findTriplets(int arr[], int n, int sum) 
{ 
    // Sort array elements 
    sort(arr, arr + n); 
  
    for (int i = 0; i < n - 1; i++) { 
  
        // initialize left and right 
        int l = i +1 ; 
        int r = n - 1; 
        int x = arr[i]; 
        while (l < r) { 
            if (x + arr[l] + arr[r] == sum) { 
  
                // Print elements if it's sum is given sum. 
                cout<< x, arr[l], arr[r]; 
                l++; 
                r--; 
            } 
  
            // If sum of three elements is less 
            // than 'sum' then increment in left 
            else if (x + arr[l] + arr[r] < sum) 
                l++; 
  
            // if sum is greater than given sum, then 
            // decrement in right side 
            else
                r--; 
        } 
    } 
} 
int main() 
{ 
    int n;
    cin>>n;
	int A[n] ; 
    for (int i = 0; i <  n; i++)
    {
        cin>>A[i];
        cout<<endl;
      
    }
  
	int sum = 0; 
    cin>>sum;
    
	int arr_size = sizeof(A) / sizeof(A[0]); 
	findTriplets(A, arr_size, sum); 
	return 0; 
} 


