#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
void push(node** head,int new_data)
{
    node* new_node=new node();
    new_node->data=new_data;
   new_node->next=*head;
   *head=new_node;
}
//first make function which checks the element is presnt or not
bool present(node* head,int data)
{
   node* t=head;
   while (t!=NULL)
   {
       if(t->data==data)
       return 1;
       t=t->next;
   }
   return 0;
}
//union 
node* Union(node* head1,node* head2)
{
  node* result=NULL;
  node* t1=head1,*t2=head2;
  //insert all elements of list 1 to result list
  while (t1!=NULL)
  {
      push(&result,t1->data);
      t1=t1->next;
  }
  //insert those element in result which is not present in list 1
  while (t2!=NULL)
  {
      if(! present(result,t2->data))
      push(&result,t2->data);
      t2=t2->next;
  }
  return result;
}
//intersection
node* intersection(node* head1,node*head2)
{
     node*result=NULL;
     node*t1=head1;
    while (t1!=NULL)
    {
        if(present(head2,t1->data))
        push(&result,t1->data);
        t1=t1->next;
    }
    return result;
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
    //node* inter=NULL;
    
    uni=Union(head1,head2);
   // inter = intersection(head1,head2);
    print(uni);
    cout<<endl;
 //  print(inter); 
}