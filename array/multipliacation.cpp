#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int mat1[n][n] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int mat2[n][n] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int res[n][n] ;
    for(int i = 0; i<n;i++)
    {
            for (int j = 0; j < n; j++)
            {
                res[i][j]=0;
                for (int k = 0; k<n; k++)
                {
                    res[i][j]+=mat1[i][k]*mat2[k][j];
                }
                
            }
            
        
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"{";
        for (int j = 0; j < n; j++)
        {
              cout<<res[i][j]<<" ";
              
        }
        cout<<"}";
        cout<<endl;
    }
    
}