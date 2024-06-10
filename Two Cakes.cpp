#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[500],c=0;
    for(int i=1; i<=3; i++)
    {
        cin>>a[i];

    }
    for(int i=1; i<=3; i++)
    {

        if(a[i] <= a[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
}
