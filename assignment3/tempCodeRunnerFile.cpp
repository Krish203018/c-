#include<iostream>
using namespace std;
void compression(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        int count =1;
        while (i<n-1 && str[i]==str[i+1])//abcd
        {

            count++;
            i++;
          
        }
        
            cout<<str[i]<<count;
   
    }
   
}
int main()
{
string str;
cin>>str; 
compression(str);
return 0;
}
