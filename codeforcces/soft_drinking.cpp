#include<iostream>
using namespace std;
int main()
{
 int n ;//no. of friends
 int k ;//soft drinks 
 int l; //qty of drinks in ml
 int c ; //limes
 int d ; //lime's silces
 int p; //salt in gm
 int nl;
 int np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 
 cout << min(min(k * l / nl, c * d), p / np) / n << endl;
 
}