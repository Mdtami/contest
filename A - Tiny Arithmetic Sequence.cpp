#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int a, b,c;
    cin>>a>>b>>c;
    int result = (c-b);
    int result2 = (b-a);
    int result3 = abs(result2+result);
    if (result == result3)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }



    return 0;
}
