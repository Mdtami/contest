#include <iostream>
using namespace std;
int main ()
{
    int T, N, i;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>N;
        if (N%2==0 && N>=2)
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
