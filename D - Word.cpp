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
    int i, k, c = 0, m = 0;
    string s, ss;
    cin >> s;
    k = s.size();
    for (i = 0; i < k; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            c++;
        }
        else
        {
            m++;
        }
    }
    if (c >= m)
    {
        for (i = 0; i < k; i++)
        {
            ss += tolower(s[i]);
        }
    }
    else
    {
        for (i = 0; i < k; i++)
        {
            ss += toupper(s[i]);
        }
    }
    cout << ss << endl;
}