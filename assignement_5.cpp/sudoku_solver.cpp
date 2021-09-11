#include<iostream>
using namespace std;
#define N 9
void print(int arr[N][N])
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
bool issafe(int grid[N][N],int row,int col,int num)
{
    //same num in similar row
    for (int x = 0; x <=8 ; x++)
        if(grid[row][x]==num)
        return false;
    //same num in similar col
    for (int  x = 0; x < N; x++)
    if(grid[x][col]==x)
    return false;
    //check for 3*3 matrix
    int startRow=row-row%3;
    int startCol=col-col%3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        
           if (grid[i+startRow][j+startCol]==num)
           
              return false;
       
    }
  return true;   
}
bool sodukusolution(int sudoku[N][N],int row,int col)
{
    //if we are at last row and last column,Now we dont want to Backtrack
    if(row==N-1&&col==N)
    return true;
    if(col==N) //Check if column value  becomes 9  we move to next row and  column start from 0
    row++;
    col=0;
    if (sudoku[row][col]>0)
   return sodukusolution(sudoku,row,col+1);
   for (int num = 1; num <=N; num++)
   {
      //now we have to check whether the numbers are to put in
      //rows and col
      if(issafe(sudoku,row,col,num))
      
         //position is correct
         sudoku[row][col]=0;
      
      
   }
   return false;

}
int main()
{

int sudoku[N][N]={5, 3, 0, 0, 7, 0, 0, 0, 0, 
6 ,0, 0 ,1, 9, 5, 0 ,0 ,0, 
0 ,9 ,8 ,0, 0, 0 ,0 ,6 ,0, 
8 ,0 ,0 ,0, 6, 0, 0 ,0 ,3 ,
4 ,0, 0 ,8 ,0 ,3 ,0, 0, 1 ,
7 ,0 ,0, 0 ,2 ,0 ,0 ,0 ,6 ,
0 ,6 ,0 ,0 ,0, 0 ,2 ,8 ,0 ,
0 ,0 ,0 ,4 ,1, 9 ,0 ,0 ,5, 
0 ,0, 0 ,0 ,8, 0, 0, 7 ,9 };

  
if(sodukusolution(sudoku,0,0))
print(sudoku);
else
{
    cout<<"do nothing";
}

return 0;

}