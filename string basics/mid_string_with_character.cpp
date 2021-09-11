#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    
    char s1[1000];
    cin>>s1;
    
    char s2;
    cin>>s2;
    
    char *ptr = strchr(s1,s2);
    cout<<ptr;
}