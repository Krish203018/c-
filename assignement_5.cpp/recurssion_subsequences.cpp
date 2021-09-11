#include<iostream>
using namespace std;
void recurssion(int n,string s,int i)
{
   if(i==0)
   cout<<" "<<endl;
   for (int j = 0; j < s.length(); j++)
   
      cout<<s[j]<<endl;
for (int k = 0; k < s.length()+1;k++)

    cout<<s[k]<<endl;


   

}
int main()
{
    int n;
    cin>>n;
    string s;
    while (n)
    {
        n--;
        cin>>s;
    }
    
 recurssion(n,s,0);
}