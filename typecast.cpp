/*#include <iostream>
using namespace std;
int main()
{
  /*  int x = 10;
    char y = 'a';
    x=x+y;
    float z= x+1.0;
    cout << "x = " << x << endl 
         << "y = " << y << endl 
         << "z = " << z << endl;
         double x = 1.2; 
  
    // Explicit conversion from double to int 
    int x;
    int sum = (int)x + 1; 
  
    cout << "Sum = " << sum; 
  
}*/
// C++ program to demonstrate 
// explicit type casting 

#include <iostream> 
using namespace std; 

int main() 
{ 
	double x = 1.8; 

	// Explicit conversion from double to int 
	int sum = (int)x + 1; 

	cout << "Sum = " << sum; 

	return 0; 
} 
