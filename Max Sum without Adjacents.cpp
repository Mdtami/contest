#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,maxi,l;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        maxi= arr[0];
        l = arr[0]+arr[n-1];
        //cout<<l<<endl;
        int k=n/2;
        //cout<<k<<endl;
        if(k>2)
        {
            int r = k-2;
            if(r>=1)
            {
                if(maxi<arr[i])
                {
                    maxi= arr[i];
                    //cout<<maxi<<endl;
                    sum = sum+maxi;
                }
            }
            k--;
        }
    }
    int q = sum+l;
    cout<<q<<endl;

}
