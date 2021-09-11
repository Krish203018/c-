#include<iostream>
using namespace std;
bool queenattack(int qR,int qC,int oR,int oC)
{
   if(qR==oC)
   return true;
   if(qC==oC)
   return true;
   if(abs(qR-oR)==abs(qC-oC))
   return true;

   return false;
}
int main()
{
  int qR = 5 ,qC= 4,
      oR = 5 , oC = 4;
  if(queenattack(qR,qC,oR,oC))
  cout<<"can attack";
  else
  {
      cout<<"not attack";
  }
}