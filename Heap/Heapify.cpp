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
    void heapShort(int arr[],int size)
    {
        while(size!=2)
        {
            swap(arr[0],arr[size-1]);
            size--;
            heapify(arr,size,0);

        }
    }
int main()
{
   heap h;
   int size=5;
  int arr1[size]={10,25,110,50,100};
  for(int i=(size/2)-1;i>=0;i--)
  {
      heapify(arr1,size,i);
  }
  cout<<" Heapify and before heapshort\n";
  for(int i=0;i<size;i++)
  {
      cout<<arr1[i]<<" ";
  }
  cout<<endl;
  heapShort(arr1,size);
    cout<<"After heapshort\n";

  for(int i=0;i<size;i++)
  {
      cout<<arr1[i]<<" ";
  }
   //h.printlist();

}

