#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n*2)
#define rc ((n*2)+1)
#define all(x) (x).begin, (x).end()
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int k = y*10;
        if(x>k){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


}
