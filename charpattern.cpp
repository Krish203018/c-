#include<iostream>
using namespace std;
int main(){
    int num= 65;
   int n=5;
   for(int i=0;i<=n;i++){
       for(int j=0;j<=i;j++){
       char ch = char(num);
       cout<< ch <<" ";//if we use bracket here then it will print same value in row.
       num=num+1; 
       }
         cout<<endl;
   }
 
}