#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int s,res, res2;
    cin>>s;
if(s==1 || s==2 || s==3 || s==4 )
        cout<<s<<endl;

    if(s>4)
    {
        if(s>4)
        {
            res = s/5;
            res2 = s%5;
            //cout<<res2<<endl;

        }
        if(res2>0)
        {
            res = res+1;
        }
        cout<<res<<endl;
    }
}
