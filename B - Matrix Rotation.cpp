#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int a,b,c,d;
        cin>>a>>b;
        cin>> c>>d;
        if(a<b && a<c && a<d)
        {
            if (a<b && d<c)
            {

                cout<<"Yes"<<endl;
            }
        }
        else if (b<a && b<c && b<d)
        {
            if (b<c && a<d)
            {
                cout<<"Yes"<<endl;
            }
        }
        else if (c<a && c<b && c<d)
        {
            if (c<d && b<a)
            {
                cout<<"Yes"<<endl;
            }
        }
        else if (d<a && d<b && d<c)
        {
            if (d<c && c<b)
            {
                cout<<"Yes"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
