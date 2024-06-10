#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a>b && a<c || a<b && a>c )
        {
            cout<<a<<endl;
        }
        else if(a>b && b>c || a<b && c>b)
        {
            cout<<b<<endl;
        }
        else if ( c<a && b<c || c>a && b>c)
        {
            cout<<c<<endl;
        }
    }

    return 0;
}
