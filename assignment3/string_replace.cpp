#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s = "Mohit";
    std::replace(s.begin(),s.end(),'M','r');
    cout<<s;
    
}