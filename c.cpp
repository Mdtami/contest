#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        if(p%10==0)
        {
            for(int i=1; i<=100; i++)
            {
                int q = p/i;
            }
            cout<<q<<endl;
        }
    }
