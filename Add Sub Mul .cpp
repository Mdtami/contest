#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int y = a-b;
    int k = a+abs(b);
    int l = a*b;
    if(k>l && k>y)
    {
        cout<<k<<endl;
    }
    else if(l>y)
    {
        cout<<l<<endl;
    }
    else
    {
        cout<<y<<endl;
    }
}
//-2 50
