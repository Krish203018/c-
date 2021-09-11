#include<iostream>
using std::cout;
using std::cin;
int main()
{
    int n=1;
 
    int count =0; // count  factors 
    for(int i = 1;i<= n;i++)
    {
          if(n%i==0)
          {
              count++;
          }
    }
  if(count == 2)// prime numer have 2 factors
  {
      cout<<n<<" is a prime Number";
  }
  else
  {
      cout<<n<<" not a prime number";
  }
  
}