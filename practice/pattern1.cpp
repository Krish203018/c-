#include<iostream>
using namespace std;
int main(){
    int n=5;
    int space = 2 * n - 2;
    
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0 ; j < space ; j++)
        cout<<" ";
        space=space-1;
        for( int j=0 ; j <= i ; j++){
        cout<<"* ";
        
        }
        cout<<endl;
        
    }
  /*  for(int i=0; i<n;i++)
    {
        cout<<" ";

    }
    for (int j = 0; j<=i; j++)
    {
        cout<<"* ";
    }
    cout<<endl;*/
    
    
    
}