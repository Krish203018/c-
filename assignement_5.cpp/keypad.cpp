#include <bits/stdc++.h>
using namespace std;
void solve(string arr[],string s,int i,char *out,int j){
    //base case:
  //int count=0;
    int n=s.length();
    if(i==n){
  //count++;
       out[j]='\0';
        
     cout << out << endl;
  
     return ;
    }
    
    //convert it to digit
    int digit = s[i]-'0';  //'2'-'0'=2(int)
    //find character corresponding to this digit
    string s1=arr[digit];  //'abc'
    //try all of them
    for(int k=0;k<s1.length();k++){
         //count++;
        out[j]=s1[k];
       
        solve(arr,s,i+1,out,j+1);
         //cout<<count;
    }

}

int main(){

//mapping to get char from digit
string arr[]={" ","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};//{ " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
string s;
int count =0;
cin>>s;
char out[100];

solve(arr,s,0,out,0);




}