//infinte
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
    int row=1;
    while (row<=n)
    {
        int space=1;
    while (space<=n-row)
    {
        cout<<" ";
        space++;
    }
    int star=1;
    while (star<=2*row-1)
    {
      cout<<"*";
      star++;
      row++;
      cout<<endl; 
    }
    
    }
row=1;
    while (row<=n-1)
    {
        int space=1;
        while (space<=row)
        {
            cout<<" ";
            space++;
        }
       int star=1;
        while (star<=2*n-row-1)
        {
            cout<<"*";
            star++;
            
        }
        row++,
        cout<<endl;
    }
    
    
   
}
