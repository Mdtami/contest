#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.size();
    int m,sum=0;
    cin>>m;
    for (int i=0; i<len; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += ((s[i])-'0');
        }
    }
    int result = sum-m;
    cout<<result<<endl;
}
