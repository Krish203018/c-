//Task - Replace all occurrences of pi with 3.14
//Approach -for this we have to make a new string
//Doubt - not able to take multiple inputs. 
//And please check the comment of 31st and 32nd line
#include<iostream>
using namespace std;
string replacePI(string given)
{
    //this will print the string from start
    string output;
    int size = given.length();
    for (int i = 0; i < size; ++i)
    {
        if (i+1<size and given[i]=='p' and given[i+1]=='i') 
        {
            output+="3.14";
           
            i++;
            
        }
        else
        {
     
           output+=given[i];
           
        }
        
    }
    return output;
}
int main()
{
  int n;
  cin>>n;     // I TRIED THIS to take input but it gets failed
  string given; //declara given outside the while loop  
  while(n--)  // when i do this it shows given is not identfied
  {
    
    cin>>given;
   } 
  cout<<replacePI(given)<<endl;
  return 0;
}