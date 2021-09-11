#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    char *p;
    p= strtok(s, " ,;:!@#$%^&*()_+=[]{}<>| ");
    while (p !=NULL)
    {
        cout<<p<<'\a'<<endl;
        p= strtok(NULL," ,;:!@#$%^&*()_+=[]{}<>| ");
    }
    
}