#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int result = b*2;
    if (a>result)
    {
        int result2 = a-result;
        cout<<result2<<endl;
    }
    else
    {
        cout<<'0'<<endl;
    }

    return 0;
}
