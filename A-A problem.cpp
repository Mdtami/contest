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
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int arr[n];
        for (long long int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (long long int i = 1; i <= n; i++)
        {

            if (k >= arr[i])
            {
                cout << "1";
                k -= arr[i];
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}