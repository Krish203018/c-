#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    int sum =0;
    for (int i = 0; i < n*n; i++)
    {
        sum = sum+n;
    }
    cout<<sum;
}
