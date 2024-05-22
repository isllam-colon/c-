#include <iostream> 
using namespace std;


struct node
{
    int data;
    node* next;
};
void addnode(node* &head, int n)
{
    node* newNode= new node;
    newNode->data = n;
    newNode->next=NULL;
     

    if(head==NULL)
    {
        head=newNode;
    }
    else{
        node* cur=head;
        while(cur)
        {
            if(cur-> next == NULL)
            {
                cur->next = newNode;
                return;
            }
            cur=cur->next;
        }
    }
}
 void display(node* head)
{
    node* cur= head;
    while( cur != NULL)
    {
        cout<< cur->data << endl;
        cur= cur->next;
    }
} 

void deletenode(node* &head,int value)
{
    if(head==NULL)
    {
        return;
    }
    if(head->temp==value)
    {
        node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    current=current->next;
    while(current->next==NULL)
    {
        if(current->next->data==value)
        {
            node *temp=current->next;
            current->next=temp;
            delete temp;
            return;


        }
        current=current-next;
    }

}

/* void insertbefore(int item,int newvalue)
{
    if(isfound(item))
    {}
    node* newNode =new node();
    newnode->data=newvalue;
    node* temp=head;
    while(temp!=NULL && temp->next-> data!=item)
    {
        temp=temp->next;   
    }
    newnode->next=temp->next;
    temp->next=newnode;
    else{
        cout<<"Not found" << endl;
    }



} */




int main()
{
   node * head=NULL;

   addnode(head,22);
      addnode(head,33);
   addnode(head,234);

   display(head);
/*
int newvalue,item;
cout<< "Enter item and new value ";
cin>> item >> newvalue;
insertbefore(item,newvalue); */
}