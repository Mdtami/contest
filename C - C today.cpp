#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, res;
        cin >> a;
        if (a <= 10)
        {
            cout << a << endl;
        }
        else if (a % 100 == 0)
        {
            int b = a / 100;
            cout << b << endl;
        }
        else if (a % 100 <= 10)
        {
            int c = (a % 100) + 1;
            cout << c << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}