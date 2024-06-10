#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int X,N,P, sum =0, result;
    cin>>X;
    cin>>N;
    result = (X*N)+X;
    for (int i = 1; i<=N; i++)
    {
        cin>>P;
        sum = sum + P;
    }
    int result2 = result - sum;
    cout<<result2<<endl;

    return 0;
}
