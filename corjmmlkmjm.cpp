#include <iostream>
using namespace std;
int main ()
{
    int t, A, B,C, i, result;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        cin>>A>>B>>C;
        if ((A+B)==C)
        {
            cout<<"YES"<<endl;
        }
        else if ((A+C)==B)
        {
            cout<<"YES"<<endl;
        }
        else if ((B+C)==A)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }



    return 0;
}
