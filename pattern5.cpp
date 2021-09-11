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
    int row =1;
    while (row<=n)
    {
     int   space =1;
     while (space<=n-row)
     {
        cout<<" ",
        space++;
     }
        int num=1;
     
        while (num<=2*row -1)
        {
            cout<<num;
            num++;
        }
        row++;
        cout<<endl;
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
        int num =1;
          while (num<=2*n-1-2*row)
          {
            cout<<num;
            num++;
          }
          row++;
          cout<<endl;
        }
}
        
     

     
    
    

