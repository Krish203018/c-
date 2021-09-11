// C++ implementation to print the given 
// pattern recursively 
#include <bits/stdc++.h> 
using namespace std; 

// function to print the 'n-th' row of the 
// pattern recursively 
void printPatternRowRecur(int n) 
{ 
	// base condition 
	if (n <1 ) 
		return; 
		
	// print the remnaining stars of the n-th row 
	// recursively
	for(int i=0;i<n;i++){	 
	cout << "* "; 
	}
	cout<<endl;
	printPatternRowRecur(n-1); 
} 



// Driver program to test above 
int main() 
{ 
	int n ;
	cin>>n; 
	printPatternRowRecur(n); 
	return 0; 
} 
