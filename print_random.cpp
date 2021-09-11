#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
    int n;
    cout<<"Guess the number b/w 1 to 10"<<endl;
    cin>>n;
    srand(time(0));
  //  cout<<RAND_MAX;
    int number=rand()%10+1;
    if(number==n)
    {
        cout<<"won the lottery"<<endl;
    }
    else
    {
        cout<<"losser"<<endl;
    }
    cout<<"the number is "<<number;
}