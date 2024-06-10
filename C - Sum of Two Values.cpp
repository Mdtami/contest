#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long int c, k, t = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int p = arr[i] + arr[j];
            if (p == m)
            {
                t++;
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
    if (t == 0)
        cout << "IMPOSSIBLE" << endl;
}