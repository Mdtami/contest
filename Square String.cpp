#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int T, i;
    cin>>T;
    for (i=1; i<=T; i++)
    {
        string s;
        cin>>s;
        int cz = s.size();
        int lim = cz/2;
        string s1, s2;
        s1= s.substr(0, lim);
        s2 = s.substr(lim);
        if (s1==s2)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
