#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ss = reverse(s.begin(),s.end());
    if (ss==s)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }




}
