// C++ program for the above approach 
#include <bits/stdc++.h> 
using namespace std; 

// Recursive function to find the last 
// index of the given number K 
int findIndex(int arr[], int idx, int K) 
{ 

	// Base Case 
	if (idx < 0) 
		return -1; 

	// Return Statement 
	if (arr[idx] == K) { 
		return idx; 
	} 

	// Recursive Call 
	return findIndex(arr, idx - 1, K); 
} 

// Driver Code 
int main() 
{ 
    int N;
    cin>>N;
	int arr[N]; 
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    
	 
	int K; 
   cin>>K;
	// Function call 
	cout << findIndex(arr, N - 1, K); 

	return 0; 
} 
