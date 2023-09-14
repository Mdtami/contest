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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j < i)
            {
                cout << "* ";
            }
            else if (j == i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
