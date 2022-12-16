#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int T, X, i;
    cin>>T;
    for (i=1; i<=T; i++)
    {
        cin>>X;
        if (X==0 || X%4==0)
        {
            cout<<"North"<<endl;
        }
        else if(X==1 || X%4==1)
        {
            cout<<"East"<<endl;
        }
        else if (X==2 || X%4==2)
        {
            cout<<"South"<<endl;
        }
        else
        {
            cout<<"West"<<endl;
        }
    }

    return 0;
}
