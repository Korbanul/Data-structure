#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n, i, j, swaped;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    i = 0;
    j = n - 1;
    while (i < j)
    {
        swaped = 0;
        while (arr[i] == 0)
        {
            i++;
        }
        while (arr[j] == 1)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
            swaped = 1;
            i++;
            j--;
        }

        if (swaped == 0)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}