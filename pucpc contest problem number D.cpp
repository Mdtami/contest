#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int t, a,b,n,result2=0, result3, j,i, result5;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        cin>>n>>a>>b;
        result5 = sqrt(n);
        //cout<<result5<<endl;
        for (j=1; j<=result5; j++)
        {
            result2 = result2+(a+b);
        }
        result3 = result2-b;
        cout<<result3<<endl;
    }

    return 0;
}
