#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n*2)
#define rc ((n*2)+1)
#define all(x) (x).begin, (x).end()
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        char s[n];
        for(i=1; i<=n; i++)
        {
            cin>>s[i];
        }
        for (j=1; j<=n; j++)
        {
            if(s[j] == s[j+1])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
