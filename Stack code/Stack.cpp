#include<iostream>
using namespace std;
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
void push(int num){
   if(top<CAPACITY-1)
    {
        top++;
        stack[top]=num;
        cout<<"Push Succesful\n";
    }else
    {
        cout<<"capacity full index="<<top<<"\n";
    }


}
int peak()
{
    if(top>=0)
    {
      return stack[top];
    }else{
        cout<<"Stack is empty\n";
       return -1;
    }
}

int pop()
{
    if(top>=0)
    {
        top--;
        cout<<"pop is succesful";
    }else{
        cout<<"Stack is empty\n";
       return -1;
    }

}


int main(){
  peak();
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  pop();
  push(60);
  cout<<peak();
}

