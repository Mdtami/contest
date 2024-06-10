#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int x;
    double y;
    cin>>x;
    cin>>y;
    double n = x+0.50;
    if (n>y)
    {
        cout<<y<<endl;
    }

    else if(x%5==0)
    {
        double k = abs(y-x);
        double m = k-0.5;
        cout<<m<<endl;
    }
    else if (x%5 != 0)
    {
        cout<<y<<endl;
    }



    return 0;
}
