#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,c=0,sum=0,len;
    cin>>t;
    int p[t];
    for (int i=1; i<=t; i++)
    {
        cin>>p[i];
        if (p[i] == p[i+1])
        {
            c++;
        }
        cout<<c<<endl;

        return 0;
    }
