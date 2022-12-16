#include <iostream>
using namespace std;
int main ()
{
    int x,y,z,t,i;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        cin>>x>>y>>z;
        if (x>y && x>z)
        {
            cout<<"Setter"<<endl;
        }
        else if (y>x && y>z)
        {
            cout<<"Tester"<<endl;
        }
        else
        {
            cout<<"Editorialist"<<endl;
        }

    }

    return 0;
}
