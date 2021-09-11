#include<iostream>
#include<stack>
using namespace std;
//we want to include these operators only
bool opertartor(char x)
{
    switch(x)
    {
        case '+':
        case '-':
        case '/':
        case '*':
        return true;
    }
    return false;
}
//prefix to infix
string preTOinf(string prefix)
{
   stack<string>s;
   int length=prefix.length();
   for (int i =0; i <=length-1 ; i++)
   {
       //if symbol is operator
       if(opertartor(prefix[i]))
       {
           //then remove two elements
           string op1=s.top();
           s.pop();
           string op2= s.top();
           s.pop();
           //add the expression
           string temp = prefix[i]+ op2  + op1  ;
           s.push(temp); // storing the expression into stack
       }
       else
       {
           // if it ia an operand  then store it into stack
           s.push(string(1,prefix[i]));
       }
       
   }
   string ans = "";
    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }
    return ans;
}
int main()
{
    string prefix = "ABC/-AK/L-*";
    cout<<"INFIX :- "<<preTOinf(prefix);
}