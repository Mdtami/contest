#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,res,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
         res = abs(c-b)+c;
        if(a<res)
        {
            cout<<"1"<<endl;
        }
        else if(a==res)
        {
            cout<<"3"<<endl;
        }
        else if(a>res)
        {
            cout<<"2"<<endl;
        }
    }

}
