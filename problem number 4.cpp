#include <iostream>
using namespace std;
int main ()
{
    int X, N, sum =0,i;
    cin>>X>>N;
    int p[N];
    int k = (X*N)+X;
    for (i=1; i<=N; i++)
    {
        cin>>p[i];
        sum = sum + p[i];
    }
    int m = (k-sum);
    cout<<m<<endl;



    return 0;
}
