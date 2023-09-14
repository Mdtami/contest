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
    ll k, n, l;
    cin >> k >> n;
    ll arr[k];
    for (ll i = 1; i <= k; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < k; i++)
    {
        l = arr[n];
    }
    // cout << l << endl;
    ll c = 0;
    for (ll i = 1; i <= k; i++)
    {
        if (arr[i] >= l && arr[i] >= 1)
        {
            c++;
        }
    }
    cout << c << endl;
}