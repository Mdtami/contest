#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y, sum=0, result=0;
    cin>>x;
    for (int i=3; i<x; i = i+3)
    {
        sum = sum + i;
    }
    //cout<<sum<<endl;
    for (int j =5; j<x; j =j+5)
    {
        result = result + j;
    }
     //cout<<result<<endl;
    y = sum+result;
    cout<<y<<endl;

    return 0;
}
