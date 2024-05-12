#include <bits/stdc++.h>
using namespace std;
int main()
{     int size=5;
    int arr[size]={1,56,506,8,10};

    for(int i=1;i<size;i++)
    {
       int  temp=arr[i];
         int j=i-1;
        while (j>=0&&arr[j]>temp)
        {
                arr[j+1]=arr[j];
                j--;

        }
         arr[j+1]=temp;
    }

  //   sort(arr,arr+size); //this is inbuilt sort ... this is better than insertion,bubble and selection time complexity O(nlogn);
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
