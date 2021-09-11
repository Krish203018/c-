#include<iostream>
using namespace std;
class node
{
   public: int data;
    node* next;
};
node* newnode(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->next=NULL;
    return temp;
}
/*void push(node** head,int new_key)
{
    node* new_node=new node();
    new_node ->data=new_key;
    new_node->next=*head;
    *head=new_node;

}*/
void rotate(node** head,int k)
{
   if(k==0)  //if we dont have to rotate the linked list
   return;
   node* current=*head;  //head 1
   //traversing the whole linked list 
   while(current->next!=NULL)
   
       current=current->next;

    current->next=*head;
    //cout<<current->data<<" data ";
          //current =5
    current=*head;
      //current = 1
    //cout<<current->data<<" io ";
   // cout<<current->data<<" data ";
      
      // will be last element for rotated array.
    for (int i = 0; i < k - 1; i++)
        current = current->next;
 
    // update the head_ref and last element pointer to NULL
    *head = current->next;
    //current 2
    current->next = NULL;
   
       
   

}
void print(node*temp)
{
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main()
{
  /* node* head = NULL;  
   push(&head, 10);  
    push(&head, 30);  
    push(&head, 11);  
    push(&head, 21);  
    push(&head, 14);*/
      node* head1 = newnode(1);
    head1->next = newnode(2);
    head1->next->next = newnode(3);
    head1->next->next->next = newnode(4);
    head1->next->next->next->next = newnode(5);
  int x=2;
   rotate(&head1,x);
  print(head1);
}