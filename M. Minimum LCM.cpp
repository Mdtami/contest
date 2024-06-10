#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x,result, result2,p;
    cin>>x;
    for (int i=1; i<=x; i++)
    {
        cin>>p;
        result = remainder(p,i);
        result2 = p/(i-1);
        cout<<result<<" "<<result2<<endl;
    }

    return 0;
}
