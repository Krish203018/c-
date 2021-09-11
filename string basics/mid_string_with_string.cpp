#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[1000];
    cin>>s1;
    char s2[1000];
    cin>>s2;
    char *ptr = strstr(s1,s2);
    cout<<ptr;
}