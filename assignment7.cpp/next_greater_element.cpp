#include <bits/stdc++.h> 
using namespace std; 

void nextGreater(int arr[], int n) 
{ 
  int out[n];
  stack<int>s;
  s.push(n-1);
  out[n-1]=-1;
      for (int i = n-2; i>=0; i--)
      {
       while (!s.empty()&&arr[s.top()]<=arr[i])
       {
         s.pop();
       }
       if (s.empty())
       {
        out[i]=-1;
       }
       else
       {
         out[i]=arr[s.top()];
       }
       s.push(i);
      }
      for (int i = 0; i < n; i++)
      {
        cout<<arr[i]<<","<<out[i]<<endl;
      }
      
} 


// The Main Function
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
} 

