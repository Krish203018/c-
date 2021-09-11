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
    node* temp=new node;
    temp->data=data;
    temp->next=NULL;
    return temp;
}
int countPairs(node* head1,node* head2,int x)
{
    int count=0;
    node*p1,*p2;
    for ( p1 = head1; p1 !=NULL; p1=p1->next)
    {
        for ( p2 = head2; p2!=NULL; p2=p2->next)
        {
            if (p1->data+p2->data==x)
            {
                count++;
                cout<<p1->data<<"-"<<p2->data<<" ";
               
            }
            
        }
        
    }
     cout<<"and the count is ";
 return count;   
}
int main()
{
     node* head1 = newnode(7);
    head1->next = newnode(5);
    head1->next->next = newnode(1);
    head1->next->next->next = newnode(3);
  node* head2 = newnode(3);
    head2->next = newnode(5);
    head2->next->next = newnode(2);
    head2->next->next->next = newnode(8);
    
 int x=10;
    cout<<countPairs(head1,head2,x);
 
    
}