/*#include<iostream>
using namespace std;
char* Duplicate(string s,int size)
{
   int i =0;
   for (int i = 0; i < size; i++)
   {
       int j;
       for ( j = 0; i < i; i++)
    
       if(s[i]==s[i+1])
       cout<<s[i]<<endl;
       if (j==i)
       s[i++]=s[i];
       cout<<s[i];
      
   }
   
     
   
}
int main()
{
    string s;
    cin>>s;
    int size = s.length();
    Duplicate(s,size);
}*/
// CPP program to remove duplicate character 
// from character array and print in sorted 
// order 
#include <bits/stdc++.h> 
using namespace std; 

char *removeDuplicate(char str[], int n) 
{ 
// Used as index in the modified string 
int index = 0; 
	
// Traverse through all characters 
for (int i=0; i<n; i++) { 
		
	// Check if str[i] is present before it 
	int j; 
	for (j=0; j<i; j++) 
		if (str[i] == str[j]) 
		break; 
	
	// If not present, then add it to 
	// result. 
	if (j == i) 
		str[index++] = str[i]; 
} 
	
return str; 
} 

// Driver code 
int main() 
{ 
    int n=1000;
char str[n];
cin>>str; 
 
cout << removeDuplicate(str, n); 
return 0; 
} 
