#include<iostream>
#include<algorithm>
using namespace std;
void rotate(int ar[][1000],int n)
{
    //reverse each row
    for(int row=0;row<n;row++)
    {
       int start_col=0;
       int end_col=n-1;
       while (start_col<end_col)
       {
          swap(ar[row][start_col],ar[row][end_col]);
           start_col++;
           end_col--;
       }
       //transpose
       for (int i = 0; i < n; i++)
       {
          for (int j = 0; j<n; j++)
          {
              if (ar[i]<ar[j])
              {
                swap(ar[i][j],ar[j][i]);
              }
              
          }
          
       }
       
    }
}
int main() 
{
    int n;
   cin>>n;
   int ar[1000][1000];
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>ar[i][j];
       }
   }
   rotate(ar,n);
	return 0;
}
    
    
         