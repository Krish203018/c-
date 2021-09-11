#include<iostream>
#include<string>
using namespace std;
int main(){
    int n ; 
    int space;
    cin>>n;
    int row;
    for (row=1; row<=n;row++)
    {
        //print spaces
        for (space=1; space<=n-row;space++)
        
          cout<<" ";
          //print stars after spaces
          //print after solid spaces
          if(row==1 || row==n)
          for(space=1; space<=n;space++)
           cout<<"*";
           //stars for hollow rows
           else
            for ( space=1; space<=n;space++)
            
                if (space==1 || space==n)
                
                   cout << "*";            
                       
                       else
                       
                           cout<<" ";
                       
                       cout<< endl;
                
            
            
        
    } 
}