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
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0, c = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
        if (sum > x)
        {
            sum -= arr[i];
        }
        else if (sum < x)
        {
            c++;
            continue;
        }
        else if (sum == x)
        {
            c++;
            break;
        }
    }
    if (sum == x && c == 3)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += arr[i];
            if (sum > x)
            {
                sum -= arr[i];
            }
            else if (sum <= x)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}