#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag;
    cin >> n;
    int arr[n];
    vector<int> v;
   
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     v.push_back(arr[0]);
     
   
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < v.size(); j++)
        {
            flag = 0;

            if (v[j] == arr[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            v.push_back(arr[i]);
           
        }
    }
   
   

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}