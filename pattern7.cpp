#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;//no. of rows
    cout<<"1"<<endl;// printing  as default
    for(int i=1;i<n;i++) // loop for a row
    {

        for(int j=0;j<=i;j++)// loop for printing elements in a row
        {
            if(i>1) //insert zeros when from row having zeros
            {
                if(j==0 || j==i) //condition for printing non-zero number
                    cout<<i; 
                else
                {
                   cout << "0"; //remove the for loop and replace with this
                }

            }
            else
            
               cout<<i; //only gets executed for i=1

        }
        cout<<endl;//printing new line after a row has ended printing
    }
}