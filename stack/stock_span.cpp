#include<iostream>
#include<stack>
using namespace std;
//with stack
/*void span(int price[],int n,int s[])
{
  stack<int>st;
  st.push(0);
  s[0]=1;
  for (int i = 1; i<n; i++)
  {
      while (!st.empty() && price[st.top()]<=price[i])
      {
          st.pop();
          s[i]=st.empty();}
         s[i] = (st.empty()) ? (i + 1) : (i - st.top()); 
         st.push(i);
  }
  

}*/
//without stack
void span(int arr[],int n,int ans[])
{
ans[0]=1;
for (int i = 1; i < n; i++)
{
     int counter=1;
     while ((i-counter)>=0 &&arr[i]>=arr[i-counter])
     {
       counter+=ans[i-counter];
     }
     ans[i]=counter;
}

}
void print(int arr[],int n)
{
  for (int i = 0; i < n; i++)
  {
      cout<<arr[i]<<" ";
  }
  
}
int main() 
{ 
    int price[] = { 10, 4, 5, 90, 120, 80 }; 
    int n = sizeof(price) / sizeof(price[0]); 
    int S[n]; 
  
    // Fill the span values in array S[] 
      span(price, n, S); 
  
    // print the calculated span values 
    print(S, n); 
  
    return 0; 
}