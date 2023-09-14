#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,m,res,i,j,c=0;
    cin>>a;
    cin>>b;
    int k[a];
    for(i=0; i<a; i++)
    {
        cin>>k[i];
    }
    m += k[b];
    //cout<<m<<endl;
    for (j=0; j<a; j++)
    {
        if(k[j]>=m)
        {
            c++;
        }
    }
    //cout<<c<<endl;
    if(b<=m)
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

}
