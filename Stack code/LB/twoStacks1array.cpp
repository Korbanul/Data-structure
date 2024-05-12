#include<bits/stdc++.h>
using namespace std;
class twostack{

    int *arr;
    int Size;
    int top1,top2;
public:
    twostack(int s)
    {
        Size=s;
        arr=new int[s];
        top1=-1;
        top2=s;
    }
    void push1(int element)
    {
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=element;
        }
    }
    void push2(int element)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=element;
        }
    }

    int pop1()
    {
        if(top1>=0)
        {
            top1--;
        }else{
            return -1;
        }

    }
    int pop2()
    {
        if(top2<Size)
        {
            top2++;
        }else{
            return -1;
        }

    }
    show()
    {
        for(int i=0;i<Size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }



};
int main()
{
    twostack ts(5);
    ts.push1(100);
    ts.push1(20);
    ts.push1(20);


    ts.push2(300);
    ts.pop2();
    ts.push2(30);
    ts.push1(100);
    ts.show();

}
