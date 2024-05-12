#include<iostream>
using namespace std;

bool sor(int *arr,int siz)
{
    if(arr[0]>arr[0+1])
    {
        if(siz==0||siz==1)
        {
            return true;
        }
        return false;
    }else{

        return sor( arr+1, siz-1);
    }





}

int main()
{
    int arr[4]={1,12,3,40};
   bool ans=sor(arr,4);
   if(ans)
   {
       cout<<"sort";
   }else{

   cout<<"unsorted";
   }
}
