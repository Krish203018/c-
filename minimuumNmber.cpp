#include<bits/stdc++.h>
using namespace std;
void min(int n)
{
    for (int i = 9; i >2 ; i--)
    {
        while (n%i==0)
        {
           int val = i;
           cout <<val;
        }
        
    }
   /* if (n>=0&&n<=9)
    {
       return n;
    }*/
    
}
int main()
{
    int n;
    cin>>n;
    min(n);

}