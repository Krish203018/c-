#include<iostream>
using namespace std;
void pointers(int n)
{
    int var=20;
    cout<<var<<endl;  //print values
    int *ptr;
    ptr= &var;
  //  cout<<ptr*8<<endl;
    //cout<<ptr/5<<endl;
    cout<<ptr-1<<endl;
    cout<<ptr+1<<endl;  //print adress 
    cout<<&var<<endl; //print adress
    cout<<*ptr;       //print values
}
int main ()
{
    int n;
pointers(n);
}
