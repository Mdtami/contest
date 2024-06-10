#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,c=0;
    cin>>t;
    string s;
    cin>>s;
    for (int i=0; i<t; i++)
    {
        s[i] = towlower(s[i]);
    }
    sort(s.begin(), s.end());

    for (int i=0; i<t; i++)
    {
        c++;
    }
    if (c>=26)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
