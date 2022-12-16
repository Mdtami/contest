#include <iostream>
using namespace std;
int main()
{
    int T, X, Y, i;
    cin>>T;
    for (i=1; i<=T; i++)
    {
        cin>>X>>Y;
        if (X<Y)
            cout<<"FIRST"<<endl;
        esle if (X>Y)
            cout<<"SECOND"<<endl;
        else (X==Y)
            cout<<"ANY"<<endl;

    }



    return 0;
}
