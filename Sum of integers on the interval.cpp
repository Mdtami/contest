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
    string a, b;
    cin >> a >> b;
    llu i;
    vector < ll >> v;
    vector<ll> sum = 0;
    if (a >= 0 && b >= 0)
    {
        for (i = a; i <= b; i++)
        {
            v.push_back(i);
            sum += v[i];
        }
    }
    for (i = 1; i <= 1; i++)
    {
        cout << sum[i] << endl;
    }
}
// wrong answer
