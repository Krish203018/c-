// C++ code to demonstrate star pattern 
#include <iostream> 
using namespace std; 

// function to print a row 
void printn(int i,int n) 
{ 
	// base case 
	if (i > n) 
		return;
		for(int j=1;j<=i;j++) 
	{cout << "* "; 
	}
	cout<<endl;
	// recursively calling printn() 
	printn(i+1,n); 
} 


int main() 
{ 
	int n ;
	cin>>n; 
	printn(1,n); 
	return 0; 
} 
