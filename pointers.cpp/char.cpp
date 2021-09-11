#include<iostream>
using namespace std;
int main()
{
    int a=32, *ptr=&a;
    char ch='A', &chc=ch; 
   chc+=a;
   *ptr+=chc;
    cout<<chc<<endl;
    cout<<a<<ch<<endl;
    cout<<chc<<endl;
    cout<<&chc<<endl;

}
