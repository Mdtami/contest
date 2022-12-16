#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main ()
{
    int N,i, result;
    cin>>N;
    int k[N];
    for ( i=1; i<=N; i++)
    {
        cin>>k[i];
    sort(k, k+N);
    }
    if (k+N==k)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }



    return 0;
}
