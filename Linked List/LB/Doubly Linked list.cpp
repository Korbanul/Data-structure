#include<iostream>
using namespace std;
class node{

public:
    int data;
    node* next;
    node* prev;

    node(int value)
    {
        this->data=value;
        this->next=NULL;
        this->prev=NULL;
    }
};
void printdList(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

int length(node* &head)
{
    node* temp=head;
 int    cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void insertAthead(node* &head,int value)
{
    node* temp=new node(value);
    head->prev=temp;
    temp->next=head;
    head=temp;
}

void insertAtTail(node* head,int value)
{
    node* temp=new node(value);
    node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void insertAtAnyp(node* &head,int pos,int value)
{

    node* crr=head;
    int cnt=0;

    if(pos==1)
    {
        insertAthead(head,value);
    }else if(pos==length(head))
    {
        insertAtTail(head,value);
    }else{
      node* temp=new node(value);
    while(cnt==pos-1)
    {
        crr=crr->next;
        cnt++;
    }
    temp->prev=crr;
    temp->next=crr->next;
    crr->next->prev=temp;
    crr->next=temp;

    }


}



void deleteAtanyp(node* &head,int pos)
{
    int cnt=0;
    if(pos==1)
    {
        head=head->next;
        head->prev=NULL;
    }else if(pos==length(head))
    {
        node* tail=head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->prev->next=NULL;
    }else{

          node* crr=head;
          while(cnt!=pos-1)
          {
              crr=crr->next;
              cnt++;
          }
          crr->next->prev=crr->prev;
          crr->prev->next=crr->next;

    }
}

int main()
{
    node* head=new node(100);
    insertAthead(head,200);
    insertAthead(head,800);
    insertAtTail(head,987);
    insertAthead(head,600);
     insertAtTail(head,66);
      insertAtTail(head,777);
      printdList(head);
       cout<<"Length: "<<length(head)<<endl;
      insertAtAnyp(head,2,656);

     cout<<"Length: "<<length(head)<<endl;
    printdList(head);

    deleteAtanyp(head,2);
     printdList(head);
}
