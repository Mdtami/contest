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
    int t;
    cin >> t;
    while (t--)
    {
        int i, k, c = 0;
        string s, ss;
        cin >> s;
        k = s.size();
        for (i = 0; i < k; i++)
        {
            ss += tolower(s[i]);
        }
        for (i = 0; i < k; i++)
        {
            if (ss[i] == 'y' && ss[i + 1] == 'e' && ss[i + 2] == 's')
            {
                c++;
            }
        }
        if (c == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}