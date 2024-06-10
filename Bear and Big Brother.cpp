#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c=0;
    cin>>a>>b;
    for(int i=1; i<=100; i++)
    {
        a = a*3;
        b = b*2;
        if (a>b)
        {
            break;
        }
        else
        {
            c++;
        }
    }
    int k = c+1;
    cout<<k<<endl;


    return 0;
}
