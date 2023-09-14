#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,p,q,lcm;
    cin>>a>>b;

    p = a;
    q = b;

//main logic, bujte parci khub easy, don't worry
    while(p != q && p>0 && q>0)
    {
        if(p>q)
        {
            p -= q;
        }
        else
        {
            q -= p;
        }
    }
    if(p == q)
    {
        lcm = (a*b)/p;
        cout<<"LCM OF "<<lcm<<endl;
    }
    else if(q==0)
    {
        lcm = a*b;
        cout<<"LCM OF "<<lcm<<endl;
    }
    else if(p==0)
    {
        lcm = a*b;
        cout<<"LCM OF "<<lcm<<endl;
    }
}
