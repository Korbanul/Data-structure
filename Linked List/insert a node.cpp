#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

};

struct node *creatLinkList(int a[],int size){

    node *head=NULL,*temp=NULL,*current=NULL;


    for (int i=0;i<size;i++)
    {
       temp=(struct node*) malloc(sizeof(struct node));
       temp->data=a[i];
       temp->next=NULL;
       if(head==NULL)
       {
           head=temp;
           current=temp;
       }else{
          current->next=temp;
          current=temp;
       }
    }
    return head;

}

void printlist(struct node* head)
{
    while(head!=NULL)
      {
          cout<<head->data<<" ";
          head=head->next;

      }
      cout<<endl;
}
void insertAtBegening(struct node *head,int data)
{

    struct node *newhead=(struct node*)malloc(sizeof(struct node));
    newhead->data=data;
    newhead->next=head;


     printlist(newhead);

}
void insertAtEnd(struct node*head,int data)
{
    node*current=head;
    node*endnode=(struct node*)malloc(sizeof(struct node));
    endnode->data=data;
    endnode->next=NULL;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=endnode;
    printlist(head);

}

void insertAnywhere(struct node*head,int position,int data)
{
   int counter=0;
    node*newnode=(struct node *)malloc(sizeof(struct node));
    node* temp=head;
    while(temp!=NULL)
    {
        counter++;
        if (position==counter)
        {
            newnode->data=data;
            newnode->next=temp->next;
            temp->next=newnode;
        }
        temp=temp->next;
    }
    printlist(head);


}

struct node *deleteANode(struct node*head,int value)
{
    node*dummyhead=(struct node *)malloc(sizeof(struct node));
    dummyhead->next=head;
    node*temp=head;
    while(temp->next!=NULL)
    {
        if(temp->next->data==value)
        {
            temp->next==temp->next->next;
        }
        temp=temp->next;
    }
    return dummyhead->next;
};



int main()
{
    int arr[]={10,50,60};

     struct node *head;
     head= creatLinkList(arr,3);
      printlist(head);
      insertAtBegening(head,100);
      //insertAtEnd(head,200);
      //insertAnywhere(head,2,655);

      //printlist(head);
    struct node *newhead=deleteANode(head,10);

        printlist(newhead);



}
