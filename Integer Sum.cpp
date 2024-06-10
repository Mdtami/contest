#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int p, sum=0;
    for (int i=1; i<=n; i++)
    {
        cin>>p;
        sum= sum+p;
    }
    cout<<sum<<endl;


    return 0;
}
