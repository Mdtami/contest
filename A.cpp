#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int k = a/10;
        int q = b/20;
        if(k>q)
        {
            cout<<"FIRST"<<endl;
        }
        else if(k<q)
        {
            cout<<"SECOND"<<endl;
        }
        else
        {
            cout<<"ANY"<<endl;
        }
    }
}
