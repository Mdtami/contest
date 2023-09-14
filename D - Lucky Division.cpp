#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.size();
    //cout<<len<<endl;
    for(int i=1; i<=len; i++)
    {
        if (s[i] <= 4 && s[i+1] <= 7)
        {
            cout<<"YES"<<endl;
        }
        else if(s[i] <= 7 && s[i+1] <= 4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
