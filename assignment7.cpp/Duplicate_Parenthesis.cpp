#include <bits/stdc++.h> 
using namespace std; 
bool findDuplicateparenthesis(string str) 
{ 
	
	stack<char> Stack; 

	for (char ch : str) 
	{ 
		
		if (ch == ')') 
		{ 
			
			char top = Stack.top(); 
			Stack.pop(); 

			// stores the number of characters between a  closing and opening parenthesis 
			// if this count is less than or equal to 1  then the brackets are redundant else not 
			int elementsInside = 0; 
			while (top != '(') 
			{ 
				elementsInside++; 
				top = Stack.top(); 
				Stack.pop(); 
			} 
			if(elementsInside < 1) { 
				return 1; 
			} 
		} 

		// push open parenthesis '(', operators and 
		// operands to stack 
		else
			Stack.push(ch); 
	} 

	// No duplicates found 
	return false; 
} 
int main(){
    int n;
    cin>>n;
     string s;
    while(n--)
  {
   cin>>s;
   if(findDuplicateparenthesis(s))
    cout << "Duplicate Found " << endl;
   else
    cout << "No Duplicates Found " << endl;
}

  }
   