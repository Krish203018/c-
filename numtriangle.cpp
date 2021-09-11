#include<iostream>
using namespace std;
void numTriangle(int n)
{
  int row=1;
  
  while (row<=n)
  {
    
       int space=1;
       while (space<=n-row)
       {
           cout<<" ";
           space++;
       }
           int count=1;
         
           while (row>=count)
           {

              cout<<count;
              count++;
              

           
         /*  while(row -1>= count)
           {
             cout<<count;
             count--;*/
              
 

           
           }
       
       count-=2;
       while (count>=1)
       {
        cout<<count;
        count--;
       }
           
       
    
  cout<<endl;
  row++;  
 //  cout<<count<<endl;
  }
  
  
}
int main()
{
    int n;
    cin>>n;
    numTriangle(n);

}