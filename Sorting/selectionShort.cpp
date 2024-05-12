#include<iostream>
using namespace std;
int main()
{
    int size=6;
    int arr[size]={0,10,56,8,45,100};
    for(int i=0;i<size-2;i++)
    {
        int small=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[small]>arr[j])
            {
                small=j;
            }
        }
         if(small!=i)
         {
              swap(arr[small],arr[i]);
         }

    }
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
