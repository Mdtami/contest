#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int X1,T,X2, Y1,Y2, i;
    cin>>T;
    for (i=1; i<=T; i++)
    {
        cin>>X1>>X2>>Y1>>Y2;

        int result = abs(X1-Y1);
        int result2= abs(X2-Y2);
        if (result>result2)
        {
            cout<<result<<endl;
        }
        else
        {
            cout<<result2<<endl;
        }

    }



    return 0;
}
