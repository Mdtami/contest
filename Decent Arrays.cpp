#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] <= arr[i+1])
        {
            c++;
        }
    }
    if(c==n)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
