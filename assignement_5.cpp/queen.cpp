#include<iostream>
using namespace std;
//int ans = 0 ; 
int count =0;

bool safeOrNot(int board[][15],int n,int col,int row)
{   //try the same row for previous column
   for (int i = 1; i <= n; i++)
   {
       if (board[row][i]==1)
       return false;
       
   }

     for (int i = 1; i <= n; i++)
   {
       if (board[i][col]==1)
       return false;
       
   }

    int x = row;
    int y = col;
   while (x>=1&&y<=n)// <----- top right diagonal
   {
       if(board[x][y]==1){
       return false;
       }
       x--;
       y++;
   }

   	x = row;
	y = col;
   while (x<n&&y>=1)//<-------- bottom left diagonal
   {
       if(board[x][y]==1){
       return false;
       }
       x++;
       y--;
   }



   //upper diagonal :row bhi -1 and col bhi -1
    x = row;
    y = col;
   while (x>=1&&y>=1)//this will remain us inside the column
   {
       if(board[x][y]==1)
       {return false;}
       x--;
       y--;
   }
   
   //lower diagonal ; row -1 and col +1
    x = row;
    y = col;
   while (x<n&&y<n)//this will remain us inside the column
   {
       if(board[x][y]==1){
       return false;
       }
       x++;
       y++;
   }
   return true;
}

void  Place(int n,int board[][15],int currRow)
{
    
    //base case
 if(currRow==n+1)
{
   ++count;
    for (int k= 1; k <= n; k++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(board[k][j]==1)
       cout<<"{"<<k<<"-"<<j<<"}"<<" ";
           
        }
      
       // cout<<endl;
      
    }

     cout<<"  ";
    
} 
 
 //TRY TO palce queen in the curr row and call recursive part
 for (int j = 1; j <= n; j++)
 //to check wheter the queen is safe or not we have to make a new function
 {
     if(safeOrNot(board,n,j,currRow)==true)
     {
         board[currRow][j]=1;     //<---- earlier it was board[i][currRow] , that is you were checking on the same column different rows 
         Place(n,board,currRow+1);
         // means we are not getting right position
        //backtracking 
        board[currRow][j]=0;
     }
 }
}
int main()
{
    int n;
    cin>>n;
    int board[15][15];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=n; j++)
        
            board[i][j]=0;     
    }
    
    Place(n,board,1);
    cout<<endl;
    cout<<count;
 }