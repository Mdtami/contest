#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;


        int q = n/3;
        int w = n%3;
        if(w==0)
        {
            cout<<q<<" "<<q<<endl;
        }
        else if(w>1)
        {
            cout<<q<<" " <<q+1<<endl;
        }
        else if(w ==1)
        {
            cout<<q+w<<" "<<q<<endl;
        }
    }

}
