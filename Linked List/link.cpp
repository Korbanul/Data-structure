#include<bits/stdc++.h>
using namespace std;
struct Node{
    int Data;
   struct Node *Address;


};
int main()
{
    //declaring 3 node;
Node *a=NULL;
Node *b=NULL;
Node *c=NULL;
//dynamically allocating memory;
   a=(struct Node*)malloc(sizeof(struct Node));
   b=(struct Node*)malloc(sizeof(struct Node));
   c=(struct Node*)malloc(sizeof(struct Node));

   a->Data=10;
   b->Data=20;
   c->Data=30;
   a->Address=b;
   b->Address=c;
   c->Address=NULL;

   //printing Linked List;
   while(a!=NULL)
   {
       cout<<a->Data<<"\n";
       a=a->Address;
   }




}
