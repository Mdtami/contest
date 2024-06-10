#include <iostream>
using namespace std;
int main ()
{
    int x,t,i;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        cin>>x;
        if (67<=x && 45000>=x)
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
