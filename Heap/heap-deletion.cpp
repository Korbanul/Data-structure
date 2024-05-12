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
    void heapify(int arr[],int size,int pos)
{


        int largest=pos;
        int left=2*pos+1;
        int right=2*pos+2;
        if(largest<size&&arr[largest]<arr[left]&&arr[left]>arr[right])
        {
            largest=left;

        }
        if(largest<size&& arr[largest]<arr[right]&&size>left&&size>right) //&&size>left&&size<right aita na dily 6 number index ar shathy swap kory
        {
            largest=right;
        }
        if(largest!=pos)
        {
            swap(arr[pos],arr[largest]);
            //cout<<"check:<<"<<largest<<"\n";
            //heapify( arr,size,pos);
            heapify( arr,size,largest);
        }
}
    void deletion()
    {
        if(Size==0)
        {
            return;
        }
        arr[0]=arr[Size-1];
        Size--;
        int currindex=0;
        heapify(arr,6,0);//we can use hepify also we can write a this code
        /*while(currindex<Size)
        {
            int leftchild=2*currindex+1;
            int rightchild=2*currindex+2;
            if(arr[leftchild]>arr[currindex]&&arr[leftchild]>arr[rightchild])
            {
                swap(arr[currindex],arr[leftchild]);
                currindex=leftchild;
            }else if(arr[rightchild]>arr[currindex])
            {
                swap(arr[currindex],arr[rightchild]);
                currindex=rightchild;
            }else{

            return;
            }
        }*/
    }
    void printlist()
        {
            cout<<Size<<endl;
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
   h.insertAt(600);
   h.printlist();
   h.deletion();
   h.printlist();

}
