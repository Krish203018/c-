/*
Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) 
that prints all occurrences of pat[] in txt[]. You may assume that n > m.-
*/
#include<bits/stdc++.h>
using namespace std;
void search(char *text,char *txt)
{
    int m= strlen(txt);
    int n= strlen(text);
    for (int i = 0; i <= n-m; i++){
    int j;
        for (j = 0; j < m; j++)
        
            if (text[i+j]!=txt[j])
            
                break;
            
            if (j==m)
       
         cout<<"pattern found at"<<i<<endl;
       
         }
    }
int main()
{
    char text[]="AABAACAADAABAAABAA";;
    char txt[]="AABA";
   search(text,txt);

}