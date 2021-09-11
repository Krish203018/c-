#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        
    
        ans=ans^arr[i];
    
      

    }
    
     cout<<ans;

}