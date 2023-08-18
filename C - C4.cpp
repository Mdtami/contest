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
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a = x * y;
        int p = y * z;
        int q = x * z;
        if (a % z == 0)
            cout << a << " " << z << endl;
        else if (p % x == 0)
            cout << p << " " << x << endl;
        else if (q % y == 0)
            cout << q << " " << y << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}