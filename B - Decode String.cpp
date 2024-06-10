#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k;
        cin>>n;
        string s,res;
        cin>>s;
        for( i=0; i<n; i++)
        {
            if(s[i+1]==0)
            {
                res = s[i]+s[i+1];
                cout<<res<<endl;
                k = stoi(res);
                cout<<char(k);
            }
            else
            {
                res = s[i];
                k = stoi(res);
                cout<<char(k);
            }
        }
        cout<<endl;
    }
}
