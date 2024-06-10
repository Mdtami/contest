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
    ll n = 25;
    ll arr[n];
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll c = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (arr[i] == 1)
            break;
        else
            c++;
    }
    c = c + 1;
    ll k = abs(13 - c);
    cout << k << endl;
}