#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;                  //define
    for (int i = 0; i < 5; i++)
    
        v.push_back(i+1);      //element add
    
    cout<<v.size()<<endl;
    for (int i = 0; i < 5; i++)
     { 
        v[2]=10;          //chane the value 
        cout<<v[i];
     }
    cout<<v.capacity();
 for (int i = 0; i < 5; i++)
 
     v.pop_back();      //remove elements
 cout<<v.size()<<endl;
 cout<<v.capacity()<<endl;
 
}