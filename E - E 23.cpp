#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    while (1)
    {
        a *= 3;
        b *= 2;
        c++;
        if (a > b)
            break;
    }
    cout << c << endl;
}