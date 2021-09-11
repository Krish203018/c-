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
    node* temp = new node;
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void delet(node** head,int key)
{
    node* temp = *head;
    node* prev = NULL;
   if (temp != NULL&&temp->data==key) 
    {
        *head=temp->next;
        delete temp;
        return;
    }
    
    if(temp!=NULL && temp->data!= key)
    {
    //  cout<<temp->data<<"temp"<<endl;
        prev=temp;
      //   cout<<prev->data<< "previous"<<endl;
        temp=temp->next;
    }
    
   if (temp==NULL)
    return;
   
    prev->next=temp->next;
    delete temp;
    
}
void print(node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
int main()
{
   
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=0;
    node* head = newnode(i);
    node* curr= head;
    while (n--)
    {
        cin>>i;
       curr->next=newnode(i);
       curr=curr->next;
    }
    int x;
    cin>>x;
   print(head->next);
   cout<<endl;
    delet(&head->next,x);
    cout<<"After the deletion"<<endl;
    print(head->next);
}