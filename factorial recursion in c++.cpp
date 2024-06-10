#include <iostream>
using namespace std;
long long int fact(long long int N)
{
    //fact = 1;
    if (N==1)
    {
        return 1;
    }
    else
    {
        return N*fact(N-1);
    }
}

int main ()
{
    long long int N;
    cin>>N;
    //fact(n);
    cout<<fact(N)<<endl;

    return 0;
}

//1932053504
