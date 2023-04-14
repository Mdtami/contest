#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (t[i] - t[i - 1] <= d && t[i] - t[i - 1] >= 0)
        {
            cout << t[i] << endl;
            return 0;
        }   
    }
    cout << -1 << endl;
    return 0;
}
