#include <iostream>
using namespace std;
int main ()
{
    int T, X, Y,Z, i;
    cin>>T;
    for (i=1; i<=T; i++)
    {
        cin>>X>>Y>>Z;
        if (X>Y && X>Z)
        {
            cout<<"Setter"<<endl;
        }
        else if(Y>Z && Y>X)
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
