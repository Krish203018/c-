#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row =1;
    
    for (row  = 0; row < n; row++)
    {
        int space = n - row;
        for (int i = 0; i <= space; i++)
        {
            cout<<" ";
        }
        for (int j =0 ; j<=row;j++)
        {cout<<"* ";}
        cout<<endl;
    }
    
}