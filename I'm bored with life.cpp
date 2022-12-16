#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b,i,j, fact3=1, fact1=1;
    cin>>a>>b;
    for ( i=1; i<=a; i++)
    {
        fact3= fact3*i;
    }
    for ( j=1; j<=b; j++)
    {
        fact1 = fact1*j;
    }
    if(fact3>fact1)
    {
        cout<<fact1<<endl;
    }
    else
    {
        cout<<fact3<<endl;
    }

    return 0;
}
