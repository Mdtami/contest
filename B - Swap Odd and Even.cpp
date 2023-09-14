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
    string s, k, m, p, y, q;
    cin >> s;
    ll l = s.size();
    for (ll i = 1; i <= l; i++)
    {
        if (i % 2 == 0)
        {
            m += s[i];
            p = m;
        }
        else
        {
            k += s[i];
            q = k;
        }
        y = p + q;
    }
    cout << y << endl;
}
