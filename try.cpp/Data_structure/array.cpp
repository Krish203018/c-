#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
     int s = sizeof(a)/sizeof(int);
    cout<<s<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Enter "<<i<<"th value"<<endl;
        cin>>a[i];
    }
    /*for (int i = 1; i <= n; i++)
    {
        cout<<a[i];
    }*/
    //particular index access 
    cout<<a[1]; //array ka storage location 
    cout<<endl;
    a[3]=30; // change kaise kroge
    cout<<a[3];
    //array ki middle value delete [0 1 2 3 4]->[0 1 3 4]
    
}