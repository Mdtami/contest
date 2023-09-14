#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,res2,res,x,y;
    cin>>t;
    while(t--)
    {
        x,y;
        cin>>x>>y;
        res = y-x;
        if(res == 0)
        {
            cout<<0<<endl;
        }
        else if(res<=8)
        {
            cout<<1<<endl;
        }
        else
        {
            if(res%8==0)
            {
                res2 = res/8;
                cout<<res2<<endl;
            }
            else
            {
                res2 = res/8;
                cout<<res2+1<<endl;
            }
        }

    }
}
