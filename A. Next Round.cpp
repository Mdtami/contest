#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,i,a,c=0, result;
    cin>>n>>k;
    for (i=1; i<=n; i++)
    {
        cin>>a;
       // int result =(a == a[k]);
        if (a >k)
        {
            c++;
        }

    }

    cout<<c<<endl;


    return 0;
}
