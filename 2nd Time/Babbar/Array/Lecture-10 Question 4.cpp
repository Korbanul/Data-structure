#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
        cout << ans << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        ans ^= i;
        cout << ans << " ";
    }

    cout << endl
         << ans;
}