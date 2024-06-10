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
#define nl '\n'
#define mod 1000000007
void round(int n)
{
    int c = 0;
    if (n <= 10)
    {
        cout << n << endl;
    }
    else
    {
        for (int i = 10; i <= n; i++)
        {
            if (i <= 90)
            {
                if (i % 10 == 0)
                    c++;
            }
            else if (i >= 100 && i <= 900)
            {
                if (i % 100 == 0)
                    c++;
            }
            else if (i >= 1000 && i <= 9000)
            {
                if (i % 1000 == 0)
                    c++;
            }
            else if (i >= 10000 && i <= 90000)
            {
                if (i % 10000 == 0)
                    c++;
            }
            else
            {
                if (i % 100000 == 0)
                    c++;
            }
        }
        cout << c + 9 << endl;
    }
}
int main()
{
    faster;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        round(n);
    }
}