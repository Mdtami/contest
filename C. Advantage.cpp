#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main ()
{
    int t,k;
    int n;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        cin>>n;
        int p[n];
        for (int j=0; j<n; j++)
        {
            cin>>p[j];
            sort(p, p+j);
            int result2 = p[1]-p[0];
            cout<<result2<<" ";
            int result = p[j]-p[j+1];
            cout<<result<<" ";

        }
        cout<<endl;
    }
    return 0;
}
