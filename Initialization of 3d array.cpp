#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;//input 3d value
    int arr[a][b][c];//input array taken an user
    for(int i=0; i<a; i++)//outer loop
    {
        for(int j=0; j<b; j++)//inner loop
        {
            for(int k=0; k<c; k++)//inner loop
            {
                cin>>arr[i][j][k];
            }
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
            {
                cout<<arr[i][j][k]<<" ";
            }
        }
        cout<<endl;
    }


}
