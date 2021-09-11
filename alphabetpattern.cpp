#include <iostream>
using namespace std;
int main(){
    int n=5;
    int num=65;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++){
            char ch = char(num);
            cout << ch <<" ";

        }
        num=num+1;//if we use bracket here then it will print serial value in row.
        
    cout<<endl;
    }
}