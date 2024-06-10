#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    gets(s);
    int len = strlen(s);
    cout<<len<<endl;
    int c=0;
    for(int i=len-1; i>=0; i--)
    {
        if(s[i] <= 'a')
        {
            c++;
            //break;
        }
    }
    cout<<c<<endl;
    if(c==len)
    {
        cout<<c<<endl;
    }
    else if(c !=0)
    {
        int k = (len-c);
        cout<<k<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

}
