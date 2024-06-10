#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a,b, sum, result;
    cin>>t;
    long long n,k;
    for (int i=1; i<=t; i++)
    {
        int c=0;
        cin>>n>>a>>b;
        while(n>1)
        {
            n = n/2;
            c++;
        }
        sum = (c*a)+((c-1)*b);
        cout<<sum<<endl;
    }

    return 0;
}

