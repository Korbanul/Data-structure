#include<iostream>
using namespace std;
class heap
{
public:
    int arr[100]={0};
    int Size;
    heap()
    {
        Size=0;
    }
    void insertAt(int val)
    {
        int index=Size;
        arr[index]=val;
        Size++;

        while(index>=0)
        {
             int parent=(index-1)/2;
            if(arr[parent]<arr[index])
          {
            swap(arr[parent],arr[index]);
            index=parent;
         }else{

          return;
         }
        }

    }
    void printlist()
        {
           for(int i=0;i<Size;i++)
           {
               cout<<arr[i]<<" "<< "parent= "<<arr[(i-1)/2]<<" Left: "<<arr[(2*i)+1]<<" Right:"<<arr[(2*i)+2]<<endl;
           }
           cout<<endl;

        }
};

int main()
{
   heap h;
   h.insertAt(100);
   h.insertAt(500);
   h.insertAt(400);
   h.insertAt(800);
   h.insertAt(70);
   h.insertAt(410);
   h.printlist();

}
