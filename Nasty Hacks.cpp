#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, r,c,e;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>r>>e>>c;
        int result = e-c;
        if (result > r)
        {
            cout<<"advertise"<<endl;
        }
        else if(result == r)
        {
            cout<<"does not matter"<<endl;
        }
        else
        {
            cout<<"do not advertise"<<endl;
        }
    }


return 0;
}
