#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next; //address
    Node(int value)
    {
     data= value;
     next=NULL;
    }
} ;

void insertAtBegin(Node* &head,int value)
{
    Node* temp=new Node(value);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &head,int value)
{
    Node* temp=new Node(value);
    Node* temp2=head;

    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
   temp2->next=temp;

}

void insertAtPosition(Node* &head,int position, int value)
{
    Node* temp=head;
    int con=1;
    if (position==1)
    {
     insertAtBegin (head,value);
    }
    while (con!=position-1)
    {
        temp=temp->next;
        con++;
    }
    Node* Nodetoinsert=new Node(value);
    Nodetoinsert->next=temp->next;
    temp->next=Nodetoinsert;
}


void deleteANode(Node* &head,int pos)
{
    Node* crr=head;
    Node* prev=NULL;
    int p=1;
    if(pos==1)
    {
      head=head->next;
    }else{

         while(p!=pos-1)
            {


             // prev=crr;
              crr=crr->next;
             p++;
            }
         crr->next=crr->next->next;//2nd way; here crr is previous node that i want to delete because pos-1 .. here crr->next == crr ar next ar next raktaychi.
      // prev->next=crr->next;1st way;
    }

}

void printLinkList(Node* &FirstNode)
{
    Node* temp= FirstNode;
     while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
cout<<endl;
}



int main()
{
    Node* head=new Node(10);

    insertAtBegin(head,80);
    insertAtBegin(head,90);
    Node* tail=head;
    insertAtTail(tail,658);
    insertAtTail(tail,58);
   // insertAtPosition(head,3,500);
   // deleteANode(head,3);

printLinkList(head);


}
