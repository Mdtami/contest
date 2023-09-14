#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int x,y;
        cin>>x>>y;
        int result = x-y;
        if (result>=y)
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
