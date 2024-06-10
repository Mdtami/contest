#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int x;
        cin>>x;
        if (x>100)
        {
            int result = x-10;
            cout<<result<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}
