#include <iostream>
using namespace std;
int print(int N)
{
    if (N==0)
    {
        //5cout<<endl;
        return 0 ;
    }
    else
    {
        cout<<N<<" ";
        if (N==0)
        {
            cout<<!" ";
            cout<<endl;
        }
        return print(N-1);

    }
}

int main ()
{
    int N;
    cin>>N;
    print(N);

    return 0;
}
