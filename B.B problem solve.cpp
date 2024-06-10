#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t, x,y,k;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        cin>>x>>y>>k;
        int result = abs(y-x);
        cout<<result<<endl;
        if (result >k){
        int result2 = result/k;
        cout<<result2<<endl;
        }else if (k>result){
        int result3 = k/result;
        cout<<result3<<endl;
        }
    }


    return 0;
}
