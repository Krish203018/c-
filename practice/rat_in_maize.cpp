#include<iostream>
using namespace std;
bool solve(char arr[][10],int khet[][10],int row ,int col,int i,int j)
{
    if(i==row-1&&j==col-1)
    {
        khet[i][j]=1;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
               cout<<khet[i][j]<<" ";
            }  
            cout<<endl; 
        }
        return true;  
   }//right side
      khet[i][j]=1; 
      if(j+1<col&&arr[i][j+1]!='X')   
      {
        bool kyarightme = solve(arr,khet,row,col,i,j+1);
      if(kyarightme==true)
      return true;
      }  
  //down side
  if (i+1<row&&arr[i+1][j]!='X')
  {
     bool kyadownme = solve(arr,khet,row,col,i+1,j);
     if(kyadownme==true)
     return true;
  }
  khet[i][j]=0;
  return false;
}



int main()
{
     char arr[][10]={"OXOX","OOXO","OXOO","OOOO"};
    int khet[5][10];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        khet[i][j]=0;
    }
    solve(arr,khet,5,5,0,0);
}