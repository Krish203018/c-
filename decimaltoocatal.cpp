#include<iostream>
using namespace std;
int main()
{
    int num ;
    cin>>num;
    int octalNum[100]; 
  
    
    int i = 0; 
    while (num != 0) 
    { 
  
        octalNum[i] = num % 8; 
        num = num / 8; 
        i++; 
      } 
  
    for (int j = i - 1; j >= 0; j--) 
        cout << octalNum[j]; 
    

}