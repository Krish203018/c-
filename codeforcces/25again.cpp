#include <iostream>
using namespace std;
double ll ;
int main() 
{
    int exponent(0);
    int base=5, result = 1;

    
    cin >>  exponent;

  
    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    cout << result;
    
    return 0;
}