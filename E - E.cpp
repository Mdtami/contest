#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res;
    if ((a + b) % 2 == 0 && (a + c) % 2 == 0 && (a + d) % 2 == 0 && (b + c) % 2 == 0 && (b + d) % 2 == 0 && (c + d) % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else if ((a + b + c + d) % 4 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}