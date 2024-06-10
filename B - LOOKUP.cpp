#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main ()
{
    string s,t;
    cin>>s>>t;
    int i;
    if (s==t )
    {
        cout<<"Yes"<<endl;
    }

    for ( i=0; s[i] != '\0'; i++)
    {
        if (s[i] == t)
        {
            cout<<"Yes"<<endl;

        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
