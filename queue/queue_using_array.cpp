#include<iostream>
using namespace std;
class queue{
    private:
          int *arr;
          int n,f,e;
          //give number of element
          int cs;
   public:
       queue(int max_s)
       {
           arr= new int[max_s];
           n=max_s;
           f=0;
           e=-1;
           cs=0;
       }
       void push(int d)
       {
           if (cs==n)
           {
              cout<<" no space";
              return;
           }
           //circular queue
           e=e+1;
           arr[e]=d;
           cs++;
           return;
       }
    void pop()
    {
        if (cs==0)//no element
        {
            return;
        }
        f=(f+1)%n;
        cs--;
    }
    bool empty()
    {
        if(cs==0)
        return true;
      return false;
    }
    int front(){
        return arr[f];
    }
};
int main()
{
    queue q(6);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    q.pop();


}