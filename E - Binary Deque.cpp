#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,result;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        for (int j=1; j<=a; j++)
        {
            int p[t];
            cin>>p[j];
            sum = sum+p[j];
            result = sum-b;
        }
        cout<<result<<endl;
    }

    return 0;
}
