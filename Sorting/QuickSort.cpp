#include<iostream>
using namespace std;
int part(int arr[],int s,int e)
{
  int pivot=s;
  //int pivot=e; pivot =last element

  int i=s,j=e;

  //cout<<i<<j;
while(i<j)
{
   // cout<<55;
  while(arr[i]<=arr[pivot])
    //while(arr[i]>arr[pivot]) pivot =last element
  {
      i++;
  }
  while(arr[j]>arr[pivot])
  //while(arr[j]<=arr[pivot]) pivot=last element
  {
      j--;
  }
  if(i<j)
  {
      swap(arr[i],arr[j]);
  }

}
swap(arr[pivot],arr[j]);


  return j;
}



void QuickSort(int arr[],int s,int e)
{

  if(s<e)
  {


    int pivot=part(arr,s,e);

    QuickSort(arr,s,pivot-1);
    QuickSort(arr,pivot+1,e);
  }
}
int main()
{
    int n=6;
    int arr[]={100,2,3,4,5,-200};
    QuickSort(arr,0,n-1);
for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }



}
