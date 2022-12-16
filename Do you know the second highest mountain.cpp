#include <bits/stdc++.h>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int k;
    string s;
    for (int i=1; i<=t; i++)
    {
        cin>>s>>k;

    }
    sort(k, k+t);
    cout<<s[1]<<endl;

    return 0;
}
