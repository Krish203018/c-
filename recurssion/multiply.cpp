#include <iostream>
using namespace std;
int multiply(int a , int b)
{
    if (b==0)
    {
        return 0;
    }
    if (b==1)
    {
        return a;
       
    }
    int y= multiply(a,b-1);
    return a+ y;
}
int main()
{
   int a;
   cout<<"enter the first value to be multipled"<<endl;
   cin>>a;
   int b;
   cout<<"enter the value of times to be multiplied"<<endl;
   cin>>b;
   cout <<"your total"<<endl<< multiply(a,b);
}