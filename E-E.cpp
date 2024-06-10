#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,sum;
    cin>>t;
    long long int x,y;
    while(t--)
    {
        cin>>x>>y;
        sum = x+y;
        if (sum%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
