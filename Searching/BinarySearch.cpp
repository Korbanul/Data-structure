#include<iostream>
using namespace std;
int BinarySearch(int arr[],int s,int e,int element)
{
    if(s>e)
    {
        return -1;
    }
    int mid=(s+e)/2;

    if(arr[mid]==element)
    {
        return mid;
    }
    if(element<arr[mid])
    {

       BinarySearch(arr,s,mid-1,element);
    }else if(element>arr[mid]){

     BinarySearch(arr,mid+1,e,element);
    }




}

int main()
{
    int arr[]={0,5,6,23,45,50,98};
    int element=0,n=7;
   int index= BinarySearch(arr,0,n-1,element);
    if(index!=-1)
        {
            cout<<"found in index "<<index<<" \n";

        }else{

        cout<<"Not Found";
        }

}
