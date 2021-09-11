/*#include<iostream>
using namespace std;

void pair(string& s,string& output,int i=0)
{
  output=output+s[i];
  if (i==s.length()-1)
  
     return; 
  
  if (s[i]==s[i+1])
  
   {   output=output+'*';
   }
     pair(s,output,i+1);

  
}
int main()
{
    string s;
    cin>>s;
    string output="";
   pair(s, output); 
    cout << output << endl; 
    return 0; 

}*/
// Recursive CPP program to insert * between 
// two consecutive same characters. 
#include <iostream> 
using namespace std; 

// Function to insert * at desired position 
void pairStar(string& input, string& output, 
			int i = 0) 
{ 
	// Append current character 
	output = output + input[i]; 

	// If we reached last character 
	if (i == input.length() - 1) 
		return; 

	// If next character is same, 
	// append '*' 
	if (input[i] == input[i + 1]) 
		output = output + '*';	 

	pairStar(input, output, i+1); 
} 

// Driver code 
int main() 
{ 
	string input , output = "";
  cin>>input ;
	pairStar(input, output); 
	cout << output << endl; 
	return 0; 
} 
