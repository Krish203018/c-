#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

int a,b;
cin>>a,b;
int left;
int left1;
int total,toal1;
for(int i=1;i<=b;i++)
{
    left= b-i+2;
    int j= b+left;
    for( j=2;j<=a;j++)
    {
        left1= a-j+2;
    }
   i= a+left1;
   if(a=0)
   {
       cout<<"Chandler";
   }
   else{
       cout<<"Joey";
   }
}

  
	return 0;
}

