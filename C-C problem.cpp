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
    ll a = 5, b = 5;
    ll arr[a][b];
    for (ll i = 1; i <= a; i++)
    {
        for (ll j = 1; j <= b; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll c = 0;
    for (ll i = 1; i <= a; i++)
    {
        for (ll j = 1; j <= b; j++)
        {
            if (arr[i][j] == '1')
            {
                break;
            }
            else
            {
                c++;
            }
        }
    }
    cout << c << endl;
    ll k = abs(13 - c);
    cout << k << endl;
}