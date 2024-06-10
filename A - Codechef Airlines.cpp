#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,l;
        cin>>x>>y>>z;
        int k = x*10;
        if(k>y)
        {
            l=y*z;
            cout<<l<<endl;
        }
        else
        {
             l = k*z;
            cout<<l<<endl;
        }
    }
}
