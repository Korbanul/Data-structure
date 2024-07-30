#include <bits\stdc++.h>
using namespace std;
int main()
{
    int s1, s2, present, i, j;
    cin >> s1 >> s2;
    int arr1[s1], arr2[s2];

    for (int i = 0; i < s1; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < s2; i++)
    {
        cin >> arr2[i];
    }
    // 1st Approch unoptimized. O(n^2)
    /*  for(int i=0;i<s1;i++)
     {
        for(int j=0;j<s2;j++)
        {
         if(arr1[i]<arr2[j])
         {
             break;
         }
         if(arr1[i]==arr2[j])
         {
             arr2[j]=INT_MIN;
             cout<<arr1[i];
             break;
         }

        }

     } */

    // 2nd Approch Optimized O(n)

    // 2 pointer Approch
    i = 0;
    j = 0;
    while (i < s1 && j < s2)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
}