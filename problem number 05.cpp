#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
void print(string s)
{
    string p = s;
    reverse(s.begin(), s.end());
    if (s==p)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


}
int main ()
{
    string s;
    cin>>s;
    print(s);
    return 0;
}
