#include<iostream>

using namespace std;
class node
{
    public:
    int data;
    node* next;
};
void printreverse(node* head)
{
   if(head==NULL)
   return;
   //print list after head
   printreverse(head->next);
   // print data of head
   cout<<head->data<<" ";
}
void push(node** head,int new_data)
{
    node* new_node = new node();
   new_node->data=new_data;
   new_node->next=*head;
   *head=new_node;
}
int main()
{
    node* head=NULL;
  /*  int n ,i ;
    cin>> n;
    while(n--)
    {
       cin>>i;
       push(&head,i);
    }*/
    printreverse(head);
     push(&head, 4);  
    push(&head, 3);  
    push(&head, 2);  
    push(&head, 1);  
    printreverse(head);
}