#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int result = max({a,b,c});
        int result2 = min({a,b,c});
        int result3 = result-result2;
        cout<<result3<<endl;
    }
}
