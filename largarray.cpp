#include<iostream>
#include<climits>
using namespace std;
  int main(){
      int n;
      int arr[n];
      cout<<"------------------";
      cout<<"enter the number \n";
      cin>>n;
      cout<<"------------------";
      int max_val = INT_MIN;
      int second= max_val;
      int third = second;
     
      int i=0;
      while (i<=n)
      {
           cout<<"next value ";
           int val;
           cin>>val;
           if(max_val<val)
           {
               third=second;
               second=max_val;
               max_val=val;
           }
          else if (second < val){
           
               third=second;
               second= val;
            }
           
           else if (third < val)
               third=val;
           
           


        
           i++;
        }
           
           
                   
        
     // cout<<max_val;
      cout<<second;
     // cout<<third;
    }