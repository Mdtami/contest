#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,c=0;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        cin>>n;
        if (n==2)
        {
            cout<<2<<endl;
            break;
        }
        for (int j=1; j<=n; j++)
        {

            if (n%j==0)
            {

                c++;
            }
        }
        int k = c+1;
        cout<<k<<endl;
    }


    return 0;
}
