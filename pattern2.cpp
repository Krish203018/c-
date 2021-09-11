#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"---------------"<<endl;
    cout<<"enter the value"<<endl;
    cout<<"---------------"<<endl;
    cin>>n;
    cout<<"---------------"<<endl;
    int r=1;
    while (r<=n)
    {
     int space=1;
     while (space<=n-r)
     {
         cout<<" ";
         space++;
    
     }
     int star=1;
     while (star<=2*r-1)
     {
        cout<<"*";
        star=star+1;
     }
     r++;
     cout<<endl;
     

    }
    


}