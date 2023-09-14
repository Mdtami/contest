#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
   // cin>>t;
    //for(int i=1; i<=t; i++)

       // cin>>n;
        char name[1000];
        char ch;
        gets(name);
        int len = strlen(name);
        for(int i=0; i<len; i++)
        {
            ch = tolower(name[i]);
            cout<<ch;
        }

}
