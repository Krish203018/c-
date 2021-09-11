#include<iostream>
using namespace std;
int main(){

    cout<<"---------------------"<<endl;
    cout<<"enter the value of num"<<endl;
    cout<<"---------------------"<<endl;
    int n;
    cout<<"---------------------"<<endl;
    cin>>n;
    cout<<"---------------------"<<endl;
    int num=0;
    int i=2;
    while (i<=n)
    {
        bool flag=true;
        int curr=2;
        while (curr<=i-1)
        {
            if (i%curr==0)
            {
                flag=false;
            }
            curr++;
        }
        if (flag==true)
        {
            cout<<i<<endl;
        }
        i++;
    }
    

    }
