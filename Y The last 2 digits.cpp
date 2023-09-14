#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    string s;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = a * b * c * d;
    // ll q = x % 10;
    ll p = x % 100;
    // cout << q << " " << p << endl;
    // s += to_string(q);
    s += to_string(p);
    cout << s << endl;

    return 0;
}