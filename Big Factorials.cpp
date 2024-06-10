#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact =1;
    for (int i=1; i<=n; i++)
    {
        fact = fact*i;
    }
int result = fact;
cout<<result<<endl;
//    reverse(result.begin());
    cout<<result<<endl;
}
