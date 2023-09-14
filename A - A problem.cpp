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
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll a;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a;

            if (k >= a)
            {
                k -= a;
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}
