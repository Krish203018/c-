#include<iostream>
using namespace std;
int sumtilln(int i , int n)
{
    if (i==n)
    {
       return i;
    
    }
    int x= sumtilln(i+1,n);
   /*for (int i = 0; i < n; i++)
    {
       cout<< n<<endl;
      n++;

    }*/
    
    return x+i;

}
int main()
{
  int n ;
  cout<<"enter the number"<<endl;
  cin>>n;
  cout<<sumtilln(1,n);
}