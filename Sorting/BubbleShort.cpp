#include<iostream>
using namespace std;
int main()
{
    int numOfCom=0;
    int size=10;

    int arr[size]={1,2,3,4,5,6,7,8,9,10};
    //outter Loop
    for(int i=1;i<size;i++)
    {
        int swaped=false;
        for(int j=0;j<size-i;j++) //int j=0;j<size-1;j++  this size-1 will double the inner loop.
        {
            numOfCom++;
            if(arr[j]>arr[j+1])
            {

                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(swaped==false)
        {
            break;
        }
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<numOfCom;

}
