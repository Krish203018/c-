#include<iostream>
using namespace std;
class node
{
    public:
  int data;
  node* next;
};
node* newnode(int data)
{
    node* temp= new node;
    temp->data=data;
    temp->next=NULL;
    return temp;
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
void print(node* head)
{
    while(head!=NULL)
   { cout<<head->data<<" ";
    head=head->next;}
}
int main()
{
    int n,i=0;
    cin>>n;
    node* head=newnode(i);
    node* curr=head;
    while (n--)
    {
       cin>>i;
       curr->next=newnode(i);
       curr=curr->next;
    }
    cout<<"linked list before"<<endl;
    print(head->next);
    
}