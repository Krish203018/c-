#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
char maxValue(char *str)
{
    int count[ASCII_SIZE] = {0};
    int len= strlen(str);
    int max = 0;
    char result;
    for (int i = 0; i < len; i++)
    {
        count[str[i]]++;   //ye string check kr rha hai
        if (max < count[str[i]])   //ye gin rha hai kitni values aa gayi
        {
           max = count[str[i]];
           result = str[i]; 
        }
        
    }
    
  return result;
}
int main()
{
  char str[1000];
  cin>>str; 
  cout<<maxValue(str);
}