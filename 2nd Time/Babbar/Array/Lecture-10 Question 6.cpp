#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i=0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                int n1=min(arr[i],arr[j]);
                int n2=max(arr[i],arr[j]);
                cout<<"("<<n1<<","<<n2<<")"<<endl;
            }
        }
    }
}