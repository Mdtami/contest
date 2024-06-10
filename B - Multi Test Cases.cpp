#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>t;
        int c=0;
        while(t--)
        {
            cin>>k;
            if(k%2 !=0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
