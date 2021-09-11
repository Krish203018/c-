#include<iostream>
using namespace std;
class node
{
private:
  //  node* front;
    //node* end;
public:
   int val;
   node* next;
     node(int v){
       val =v;
        next = NULL;
    }

     node(){
       // val =v;
        //next = NULL;
    }
   
};
class queue
{
private:
    node* front;
    node* end;
public:
    queue(){
     front=NULL;
    end=NULL;
    }
   
void push(int d)
{
node* n =new node(d);
if (front==NULL)
{
    front=end=n;
}
else
{
    end->next=n;
    end=n;
}

}
void pop()
{
    if (front==NULL)
    {
        return;
    }
    if (front->next==NULL)
    {
        node* t = front;
        front=end=NULL;
        delete t;
    }
    else
    {
        node*t = front;
        front=front->next;
        delete t;
    }
    
}
int aage()
{
    return front->val;
}
bool empty()
{
    if (front==NULL)
    {
        return true;
      
    }
     return false; 
}
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
   while(!q.empty()){
        cout << q.aage() << " ";
        q.pop();
    }
    return 0;
}


