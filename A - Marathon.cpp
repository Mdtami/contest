#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int a,p[t];
    for (int i=1; i<=t; i++)
    {
        cin>>a;
        int c=0;
        for (int j=1; j<=3; j++)
        {
            cin>>p[j];
            if (a<p[j])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
