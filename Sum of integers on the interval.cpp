#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,sum=0,i;
    cin>>a>>b;
    a = abs(a);
    b = abs(b);
    for( i=a; i<=b; i++)
    {
        sum += i;
    }
    cout<<sum<<endl;
}
