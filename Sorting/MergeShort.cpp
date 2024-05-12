#include<iostream>
using namespace std;
void Merge(int arr[],int s,int e)
{
    int mid=(s+e)/2;

    //creating 2 array and coping value from main array;
    int len1=mid-s+1;
    int len2=e-mid;

    int mainindex=s;

    int *first =new int [len1];
    int *second =new int [len2];
   for(int i=0;i<len1;i++)
   {
       first[i]=arr[mainindex++];
   }
 //  mainindex=mid+1;
   for(int i=0;i<len2;i++)
   {
       second[i]=arr[mainindex++];
   }

   //Merging 2 sorted array;
   int index1=0;
   int index2=0;
   mainindex=s;

   while(index1<len1&&index2<len2)
   {
       if(first[index1]<second[index2])
       {
           arr[mainindex++]=first[index1++];
       }else{
           arr[mainindex++]=second[index2++];
       }
   }

   while(index1<len1)
         {
             arr[mainindex++]=first[index1++];
         }
         while(index2<len2)
            {
                arr[mainindex++]=second[index2++];
            }

delete []first;
    delete []second;
}

void MergeSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    //for left part
    MergeSort(arr,s,mid);
    //for right part
    MergeSort(arr,mid+1,e);
    Merge(arr,s,e);
}


int main()
{
    int n=6;

    int arr[n]={10,8,0,4,90,5};
    MergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
