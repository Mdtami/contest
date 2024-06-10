#include <bits/stdc++.h>
#include <string>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int c=0,result2, k, result,m=0;
    for (int j=0; s[j] != '\0'; j++)
    {
        m++;
    }

    for (int i=0; i<m; i++)
    {
        if (s[i] == 'w')
        {
            c++;
        }
    }
    result2 = m-c;
    k = (c*2)+result2;
    cout<<k<<endl;

    return 0;
}
