#include<iostream>
using namespace std;
void toggle(string str)
{
    int n=str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else
        {
            str[i]=str[i]+32;
        }
        
        cout<<str[i];
    }
    
}
int main()
{
    string str;
    std::getline(cin,str);
    toggle(str);
}