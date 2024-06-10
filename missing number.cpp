#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,sum=0,missing;
    cin>>n;
    for (int i=1; i<n; i++)
    {
        cin>>a;
        sum = sum+a;
    }
    missing = ((n+1)*n)/2-sum;
    cout<<missing<<endl;

    return 0;
}
