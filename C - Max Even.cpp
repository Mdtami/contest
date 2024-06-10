#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,sum=0,i;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        if (a%2==0)
        {
            sum += a;
        }
    }
    if (sum==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
}
