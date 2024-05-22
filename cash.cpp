#include <iostream>
using namespace std;
struct node{
int data;
node* next;
};

void addnode(node* &head,int value)
{
    node* newNode=new node;
    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        node *cur=head;
        while(cur)
        {
            if(cur->next==NULL)
            {
                cur->next=newNode;
                return;
            }
            cur=cur->next;
        }
    }
}





void deletenode(node* &head,int value)
{
    if(head==NULL)
    {
        return;
    }
    if(head->data==value)
    {
        node* temp=head;
        head->next=NULL;
        delete temp;
        return;
    }
    node*current=head;
    while(current->next==NULL)
    {
        if(current->next->data ==value)
        {
            node*temp=current->next;
            delete temp;
            return;
        }
current=current->next;
    }

}
void displaynode(node * head)
{
        node* cur= head;
  while(cur!=NULL)
  { 
    cout<<cur->data <<endl;
    cur=cur->next;
  }
}
/* 
void deletenode(node* &head,int value)
{
    if(head==NULL){
        return;
    }
    if(head->data==value)
    {
        node* temp=head;
        head=head->next;
        delete temp;
        return;
    }

    node* current = head;
    while (current->next == NULL)
    {
        if(current->next->data==value)
        {
            node* temp =current->next;
            delete temp;
            return;
        }
        current = current-> next;


    }


} */

int main()
{
    node *head=NULL;
    addnode(head,22);
    addnode(head,33);
    addnode(head,444);
    displaynode(head);
}
