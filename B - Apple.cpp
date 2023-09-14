#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,w,q;
    cin>>x>>y>>z;
    int res = y/3;
    n = z/3;
    q = z%3;
    if(res<x)
    {
        w = (n*y)+(q*x);
        cout<<w<<endl;
    }
    else if(x<res)
    {

        w = x*z;
        cout<<w<<endl
    }
    else if(z<3)
    {
        w = x*z;
        cout<<w<<endl;
    }
}
