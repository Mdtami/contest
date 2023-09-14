//bakita korte hobe
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<n; j++)
    {
        for(int k = j; k<n; k++)
        {
            for(int r =j; r<k; r++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        //cout<<endl;
    }

}
