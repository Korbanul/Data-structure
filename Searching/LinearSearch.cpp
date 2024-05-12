#include<iostream>
using namespace std;
int main()
{
    int arr[]={50,0,23,6,45,98,5};
    int element=23;
    bool found=false;
    for(int i=0;i<sizeof(arr)/4;i++)
    {
        if(arr[i]==element)
        {
            cout<<"found in index "<<i<<" \n";
            found=true;
            break;
        }

    }
    if(!found)
    {
        cout<<"Not found";
    }


}
