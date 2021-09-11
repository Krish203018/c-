#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value "<<endl;
    cin>>n;
    


    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=i; j++){
           
         count++;
        }
      
    
         
    }
      cout<<"total diyas will be"<<endl;
        cout<<count;
}
