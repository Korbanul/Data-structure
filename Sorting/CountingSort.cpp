#include<iostream>
using namespace std;
void CountigSort(int arr[],int n,int range)
{
    int *Count=new int[range+1];
    int *output=new int[n];

    for(int i=0;i<range+1;i++)
    {
       Count[i]=0;
    }
 for(int j=0;j<n;j++)
    {

        ++Count[arr[j]];

    }

    for(int i=1;i<range+1;i++)
    {
       Count[i]+=Count[i-1];
    }

    for( int i=n-1;i>=0;i--)
    {
       output[--Count[arr[i]]]=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int n=8,range=98;
    int arr[n]={10,6,0,98,4,6,0,10};
    CountigSort(arr,n,range);

}
