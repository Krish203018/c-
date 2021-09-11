#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void push(node** head,int new_data)
{
   node* newnode = new node;
   newnode->data=new_data;
   newnode->next=*head;
   *head=newnode;
}
bool isPresent(node* head,int data)
{
    node* t= head;
    while(t!=NULL)
    {
        if(t->data==data)
        return 1;
        t=t->next;
    }
    return 0;
}
node* Union(node* head1,node* head2)
{
    node* dummy = NULL;
    node* t1=head1, *t2 =head2;
    while (t1!=NULL)
    {
        push(&dummy,t1->data);
        t1=t1->next;
    }
  while (t2!=NULL)
  {
      if(!isPresent(dummy,t2->data))
      
          push(&dummy,t2->data);
          t2=t2->next;
      
  }
  return dummy;
}
void print(node* Node)
{
    while (Node!=NULL)
    {
        cout<<" "<<Node->data;
        Node=Node->next;
    }
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    push(&head1,1);
    push(&head1,2);
    push(&head2,3);
    node* uni=NULL;
    uni=Union(head1,head2);
    print (uni);
}