#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a == 0) 
     { 
        cout << "Invalid"; 
        return 0; 
     } 
  
     int d  = b*b - 4*a*c; 
     double sqrt_val = sqrt(abs(d)); 
  
     if (d > 0) 
     { 
         cout << "Roots are real and different \n"; 
         cout << (double)(-b + sqrt_val)/(2*a) 
              << (double)(-b - sqrt_val)/(2*a); 
     } 
     else if (d == 0) 
     { 
         cout << "Roots are real and same \n"; 
         cout << -(double)b / (2*a); 
     } 
     else // d < 0 
     { 
         cout << "Roots are complex \n"; 
        
     } 
}