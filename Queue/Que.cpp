#include<bits/stdc++.h>
using namespace std;
#define CAPACITY 5

int que[CAPACITY];
int fornt=0,rear=-1,totalitem=0;

bool isfull()
{
    if(CAPACITY==totalitem)
    {
        return true;
    }else {
        return false;
    }
}
bool isempty()
{
    if (totalitem==0)
    {
        return true;
    }else {
        return false;
    }
}


void enqueue(int value)
{
    if(isfull())
    {
        cout<<"The queue is full\n";
    }else{
        rear=(rear+1)%CAPACITY;//this is for circular queue if rear++ dai th holy rear index jokhon 5 hoby ba basi hoby tamon kono index toh array tay nai;

         que[rear]=value;

        totalitem++;
    }



}

int dequeue()
{
    if(isempty())
       {
           cout<<"The Queue is Empty\n";
           return -1;
       }

           int frontitem=que[fornt];
           que[fornt]=(int)NULL;
           fornt=(fornt+1)%CAPACITY;


           totalitem--;


    return frontitem;
}

void printQueue()
{
    if(isempty())
    {
        cout<<"The Queue is Empty\n";
    }else{

        for(int i=0;i<CAPACITY;i++)
        {
            cout<<que[i]<< " ";

        }
    }
        cout<<endl;



}




int main()
{
   printQueue();
   enqueue(10);
   enqueue(50);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   printQueue();
   dequeue();
   printQueue();

   enqueue(80);
    printQueue();



}

