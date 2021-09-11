#include<iostream>
using namespace std;
void rearrange(int arr[],int n)
{
    int temp[n]; //new array of same size
    int small = 0;
    int large = n-1;
    int flag = true;
    for (int i = 0; i < n; i++)
    {
      //  flag =! flag; //agr loop ka flag bahr loop ke equal nhi h 
        if(flag)
         temp[i]=arr[large--];
        else
         temp[i]=arr[small++];
        flag =! flag; //agr loop ka flag bahr loop ke equal nhi h
    }
    //copy temp to arr
    for (int i = 0; i < n; i++)
      arr[i] = temp[i];

}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(int);
    cout << "Original Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    rearrange(arr, n);
 
    cout << "\nModified Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
}