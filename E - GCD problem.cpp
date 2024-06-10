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
// int gcd(int x, int y, int p, int q)
// {
// }
// return -1;
// // }
// void solve()
// {
// }
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int p = (y - x); // 6
        int q = y - p;   // 9
        for (int i = p; i <= q; i++)
        {
            for (int j = i; j <= q; j++)
            {
                if ((i + j) >= p && (i + j) <= q)
                {
                    int p = i;
                    while (i != j)
                    {
                        if (j % i == 0)
                        {
                            cout << i << " " << j << endl;
                            break;
                        }
                        i = j % i;
                        j = p;
                    }
                }
            }
        }
        cout << -1 << endl;
    }
    return 0;
}