#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c = 0;
        cin >> a >> b;

        while (a != 0)
        {
            a = a - b;
            if (a < b)
            {
                cout << -1 << endll;
                break;
            }
        }
        cout << c << endl;
        if (c == a)
        {
            cout << a << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
