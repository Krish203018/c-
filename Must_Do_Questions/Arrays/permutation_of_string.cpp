#include<iostream>
using namespace std;
void permutations(string str,int i,int n)
{
    if(i==n-1)  // if word contains single character or we at last point then this 
    // loop we will be called
    {
    cout<<str<<endl;
    }
    // now for remaining characters
    for ( int j = i; j < n; j++)
    {
        swap(str[i],str[j]); // this will fixed the first value and always change the jth value
        permutations(str,i+1,n);//calling recursion
        swap(str[i],str[j]); // backtracking
    }
    
}
int main()
{
    string s = "ABC";
    cout<<s[2]<<endl;
    int n = s.length();
    cout<<n;
    permutations(s,0,n);

}