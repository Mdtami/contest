#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int a,b,c;
    for (int i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
    if (a<=b && b>=c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }

    return 0;
}
