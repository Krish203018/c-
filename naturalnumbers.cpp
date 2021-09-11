#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=1;
    int sum=0;
    while (i<=n)
    {
        
        sum=i+sum;
        i=i+1;
    }
      cout<<"your sum is"<<endl;
      cout<<sum<<endl;
    
}