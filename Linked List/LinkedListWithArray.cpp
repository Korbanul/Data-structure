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
           //current=temp;
       }else{
          current->next=temp;
          current=current->next;
       }
    }
    return head;

}



int main()
{
    int arr[]={10,50,60};

     struct node *head;
     head= creatLinkList(arr,3);
      while(head!=NULL)
      {
          cout<<head->data<<endl;
          head=head->next;
      }


}
