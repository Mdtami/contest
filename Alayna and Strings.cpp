#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,k=0;
    for (int i=0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            c++;
        if (s[i] >= 'a' && s[i] <= 'z')
            k++;
    }

    cout<<c <<" "<< k<<endl;



    return 0;
}
