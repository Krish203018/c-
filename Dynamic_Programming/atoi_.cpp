#include<bits/stdc++.h>
using namespace std;
int Atoi(string s)
{
    int n = atoi(s.c_str());
    return n;
}
int main()
{
    string str = "123S";
    cout<<Atoi(str);

}