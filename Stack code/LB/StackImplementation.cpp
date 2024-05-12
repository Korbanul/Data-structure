#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int *arr;
    int top;
    int Size;
    Stack(int Size)
    {
        this->Size=Size;
        arr=new int[Size];//array ar memory allocation.
        top=-1;
    }
    void push(int element)
    {
        if(top<Size)   //checking array has space or not?
        {
            top++;
            arr[top]=element;
            //cout<<Size<<endl<<top<<endl;
        }else
        {
            cout<<"stack is full\n";
        }

    }
    void pop()
    {
        if(top>=0)      //checking array has element or not
        {
         top--;
        }else
        {
           cout<<"stack is empty\n";
        }

    }
    int peak()
    {
        if(top>=0&&top<Size)
        {
            return arr[top];
        }else
        {
            cout<<"stack is empty\n";
            return -1;
        }

    }
    bool isEmpty()
    {
       if(top==-1)
       {
         return true;
       }else
       {
          return false;
       }
    }


};




int main()
{
    Stack a(5);
    a.push(100);
    a.push(200);
    a.push(300);
    cout<<a.peak()<<endl;
    a.pop();
    cout<<a.peak()<<endl;
    a.pop();
    cout<<a.peak()<<endl;
    a.pop();
    cout<<a.peak()<<endl;
    cout<<a.isEmpty();

}
