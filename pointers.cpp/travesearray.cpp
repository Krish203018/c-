#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,8,9,10,5};
    int *p;
    p=arr;
    for (int i = 0; i < 5; i++)
    {
        cout<<*p<<" "<<&p<<endl;
       p++;
       
    }
    
}