#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n;
    cout << n << " ";
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            k = n;
            cout << k << " ";
        }
        else
        {
            n = n * 3 + 1;
            k = n;
            cout << k << " ";
        }
    }
    cout << endl;
}