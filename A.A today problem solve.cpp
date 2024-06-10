#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main ()
{
    int c=0, result2;
    char S[1000000];
    cin.get(S,100000);
    int result = strlen(S);
    for (int i = result-1; i>=0; i--)
    {
        c++;
        if (c==result)
        {
            cout<<"-1"<<endl;
        }
        else if (S[i] == 'a')
        {
            result2 = result -c;
            break;
        }
    }
    if (c==result)
    {

    }
    else
    {
        cout<<result2+1<<endl;
    }

    return 0;
}
