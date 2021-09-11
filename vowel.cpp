#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the alphabet"<<endl;
    cin>>c;
    int lowercase,uppercase;
    lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (lowercase||uppercase)
    
       cout<<c<<" is a vowel";
       else
       {
           cout<<c<<" not a vowel";
       }
       
    
    
}