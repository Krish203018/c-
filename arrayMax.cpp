#include <bits/stdc++.h> 
using namespace std; 
  
int largest(int arr[], int n) 
{ 
    int i; 
      
    // Initialize maximum element 
    int max = arr[0]; 
  
    // Traverse array elements  
    // from second and compare 
    // every element with current max  
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
} 
  
// Driver Code 
int main() 
{ 
     int n;
    cin>>n;
	int arr[n] ; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     n = sizeof(arr) / sizeof(arr[0]); 
    cout << largest(arr, n); 
    return 0; 
} 
  