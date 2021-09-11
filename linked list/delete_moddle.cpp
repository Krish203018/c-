#include<iostream>
using namespace std;
class node
{
 public: int data;
  node* next;
};
int countofNode(node* head)
{
    int count =0;
    while (head!=0)
    {
        head=head->next;
        count++;
    }
    return count;
}
//delete middle of the node
node* middle(node*head)
{
    if (head==NULL)
    return NULL;
   if(head->next==NULL)
    {  
        delete head;
      return NULL;
    }
    //method 1 
   /*node* copyhead = head;
   int count = countofNode(head);
   int mid= count/2;
  //cout<<mid;
   while (mid-- >1)
   {
       head=head->next;
   }
    head->next=head->next->next;//middle element delte
    
   return copyhead;*/   
//method 2
node* slow=head;
node* fast=head;
node* prev;
while (fast!=NULL&&fast->next!=NULL)
{
   fast=fast->next->next;
   prev=slow;
   //cout<<slow->data<<" ";
  slow=slow->next;
  
}
   prev->next=slow->next;
   delete slow;
   return head;
}
void print(node* Node)
{
    while (Node!=NULL)
    {
        cout<<Node->data<<" ";
        Node=Node->next;
    }
    
}
node* newnode(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->next=NULL;
    return temp;
}
int main()
{
    
   node* head = newnode(1);
    head->next = newnode(2);
    head->next->next = newnode(3);
    head->next->next->next = newnode(4);
 
    cout << "Given Linked List\n";
    print(head);
 
    head = middle(head);
 
    cout << "\nLinked List after deletion of middle\n";
    print(head);
 /*int n,i;
 cin>>n;
 node* head= newnode(i);
 node* curr=head;
 while (n--)
 {
     cin>>i;
     curr->next=newnode(i);
     curr=curr->next;
 }
  head=middle(head) ;//head->next=middle(head->next) work in both cases
 print(head->next);
    return 0;*/
}