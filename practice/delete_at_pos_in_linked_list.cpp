#include<iostream>
using namespace std;
class node
{ public:
  int data;
  node* next;
};
node* newnode(int new_data)
{
    node* temp= new node;
    temp->data=new_data;
    temp->next=NULL;
    return temp;
}
void deletePos(node** head,int pos)
{
    if(*head==NULL)
    return;
    node* temp= *head;
    if(pos==0)
  {  *head = temp->next;
    delete temp;
    return;
  }
    for (int i = 0;temp!=NULL&& i < pos-1; i++)
    {
        temp=temp->next;
    }
    if(temp==NULL||temp->next==NULL)
  {  cout<<"not possible ";
    return;}
    //cout<<temp->data;
    node* next= temp-> next->next;
   delete temp->next;
   temp->next=next;
}
void reverse(node** head,node* curr,node* prev)
{
    if (!curr->next)  //WHEN I WRITE if(curr->next!=NULL) it prints the linked list in same way
    {
        *head=curr;
        curr->next=prev;
        return;
    }
    node* next = curr->next;
    curr->next=prev;
    reverse(head,next,curr);
}
void applyingReverse(node** head)
{
  if( !head)  //WHEN I WRITE if(head!=NULL) it prints the linked list in same way
  return;
  reverse(head,*head,NULL);
}
void print(node* node)

{
    while (node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }   
}
int main()
{
    node* head= newnode(5);
    head->next=newnode(4);
    head->next->next=newnode(8);
    print(head);
    cout<<endl;
    deletePos(&head,1);
    print(head);
    applyingReverse(&head->next);
    cout<<" after deletion"<<endl;
    print(head->next);
}