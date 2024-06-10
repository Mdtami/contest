#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k=0;
    cin>>n;
    for (int i=2; i<=n; i++)
    {
        for (int j=2; i<j; j++)
        {
            int c=0;

            if(i%j==0)
            {
                c++;
                cout<<c<<endl;
            }
        }
    }
}
