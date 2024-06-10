#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,n, res;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        res = (n+1)*y;
        if (res>= x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
