#include <iostream> 
#include <stack> 
using namespace std; 
void calculateSpan(int price[], int n, int S[]) 
{ 
	stack<int> st; 
	st.push(0); 

	//first element is always 1 
	S[0] = 1; 
       for (int i = 1; i < n; i++) { 
		// Pop elements from stack while stack is not empty and top of stack is smaller than price[i] 
		while (!st.empty() && price[st.top()] <= price[i]) 
			st.pop(); 

		// If stack becomes empty, then price[i] is  greater than all elements on left of it, 
		S[i] = (st.empty()) ? (i + 1) : (i - st.top()); 

		// Push this element to stack 
		st.push(i); 
	} 
} 
void printArray(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
        cout<<"END";
} 
int main() 
{ 
    	int n;
      cin>>n;
	int price[n] ; 
      for (int i = 0; i < n; i++)
      {
         cin>>price[i];
      }
      
	int S[n]; 
    calculateSpan(price, n, S); 
	printArray(S, n); 

	return 0; 
} 
