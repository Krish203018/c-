#include<iostream>
//#include<climits> //maths 
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
   // int max = INT_MIN; // -infintiy
    int temp = 0;
    for (int i = 1; i <=n; i++)
    {
        cout<<"Enter"<<i<<"th value"<<endl;
        int value;
        cin>>value;
         
        if(temp < value)
        {
            temp =value; // value jo ha temporay ke equal ho jaega
        }
        
    }
    cout<<temp;
    return 0;
}