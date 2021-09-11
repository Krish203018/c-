#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
       cin>>n;
    cout<<"---------------------"<<endl;
 
    int i=2;
    while (i<= n)
    {
        bool flag=true;
        int curr=2;
        while (curr<=(i-1))
        {if (i%curr==0)
        {
            flag=false;
        }
        
            curr=curr+1;
        }
        if (flag==true)
        {
            cout<<i<<" "<<endl;
        }
        i=i+1;
    }
    
return 0;

}