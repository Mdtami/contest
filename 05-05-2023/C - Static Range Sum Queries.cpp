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
    ll a, b;
    cin >> a >> b;
    ll arr[a];
    for (int i = 1; i <= a; i++)
    {
        cin >> arr[i];
    }
    while (b--)
    {
        ll c, d, sum = 0;
        cin >> c >> d;
        for (int i = c; i <= d; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
}
