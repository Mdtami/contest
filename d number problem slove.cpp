#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,m,k,c=0;
    cin>>n>>m>>k;
    long long int p[n],q[m],i,j;
    for ( i=1; i<=n; i++)
    {
        cin>>p[i];

        for ( j=i; j<=i; j++)
        {
            cin>>q[j];

            if (p[i]>=q[j])
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
