#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t, res;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if (x<=9)
        {
            cout<<x<<endl;
        }
        else
        {
            res = x%10;
            cout<<res<<endl;
        }
    }


}
