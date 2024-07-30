#include <iostream>
using namespace std;

int main()
{
    int m, ans = 0;

    cin >> m;
    int n = (2 * m) + 1;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Advance With XOR operator.
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
        cout << ans << " ";
    }

    cout << endl
         << ans;
}
 