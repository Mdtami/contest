#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,c=0,p;
    cin>>t>>p;
    int a;
    for (int i=1; i<=t; i++)
    {
        cin>>a;
        if (a<p)
        {
            c++;
        }

    }
    cout<<c<<endl;

    return 0;
}
