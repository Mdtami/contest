#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    string s,ss;
    cin>>s;
    int i;
    int len = s.size();
    //cout<<len<<endl;
    for( i=len-1; i>=0; i--)
    {
        ss = s[i];
    }
    if (ss==s)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

}
