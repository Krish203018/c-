#include<iostream>
using namespace std;
int main() 
{
    int f[1000] ,N, n;
    cin>>n;
    f[1]=0;
    f[2]=1;
    for(int i = 3; i <= N; i++) 
        f[i] = f[i - 1] + f[i - 2]; 
         N= n*(n+1)/2; 
    int f[N + 1]; 
}
    
   void main(int n){
    int fiboNum = 1; 
     for (int i = 1; i <= n;i++) 
    { for (int j = 1;j <=i;j++) 
            cout << fiboNum++ << " "; 
              
        cout << endl; 
    } 


    
     }   