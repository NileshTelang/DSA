

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
} 

void insertAtTail(node* &head,int val){
    node* n= new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void deletion(node* &head,int val)
{
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void deletionATHead(node* &head)
{
    node* nil=head;
    head=nil->next;
    delete nil;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){

    cout<<"Singly_linkedlist : "<<endl;
    node* head=NULL;
    cout<<"Enter the number of elements : "<<endl;
    int a;
    cin>>a;
    cout<<"Insert the elements : "<<endl;
    for(int i=0;i<a;i++)
    {
        int c;
        cin>>c;
        insertAtTail(head,c);
    }
    cout<<"Displaying linked list : "<<endl;
    display(head);
    cout<<endl;
    char kt;
    kt='y';
    while(kt=='Y' || kt=='y')
    {
    cout<<"\n1.Insertion at head \n2.Perform search operation \n3.Perform deletion \n4.Delete the head of the linked list  \n5.Exit "<<endl;
    cout<<"\nEnter your choice  (1-5) :  "<<endl;
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Insertion at head"<<endl;
            int x;
            cin>>x;
            insertAtHead(head,x);
            display(head);
            cout<<endl;
        break;
        case 2:
            cout<<"Performing search operation "<<endl;
            int y;
            cin>>y;
            cout<<search(head,y);
            cout<<endl;
        break;
        case 3:
            cout<<"Enter the number to be deleted : "<<endl;
            int z;
            cin>>z;
            deletion(head,z);
            display(head);
            cout<<endl;
        break;
        case 4:
            cout<<"Deleting Head"<<endl;
            deletionATHead(head);
            display(head);
            cout<<endl;
        break;
        case 5:
            cout<<"Thank You For Using KT's program @kt"<<endl;
        break;
    }
    cout<<"Do you want to perform any other operation : (y/n) "<<endl;
    cin>>kt;
    }
    return 0;

}