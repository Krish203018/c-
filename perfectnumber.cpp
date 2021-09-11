#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"the perfect number upto "<<n<<" is";
    int i=1;
    int u=1;
    int sum=0;

    while (i<=n)
    {
        while (u<n)
        {
            if(u<i){
                if (u%i==0)
                {
                    sum=sum+u;
                }
                u=u+1;
            }
            if(sum==1){
                cout<<"i"<<" "<<endl;
            }
            i=i+1;
            u=1;
            sum=0;
        }
        
    }
    


    
}