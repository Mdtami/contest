#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    string s;
    int t,i,j;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        int c=0;
        cin>>s;
        for (j=0; s[j] != '\0'; j++)
        {
            if (s[j] == 'a' || s[j] == 'e' ||  s[j] == 'a' || s[j] == 'i' || s[j] == 'a' || s[j]== 'o' ||  s[j] == 'a' || s[j] == 'u' || s[j]== 'e' || s[j]=='i'
                    || s[j]== 'e' || s[j]=='o' || s[j]== 'e' || s[j]=='u' || s[j]== 'i' || s[j]=='o' || s[j]== 'i' || s[j]=='u' || s[j] == 'e' || s[j] == 'a' ||
                    s[j] == 'i' || s[j] == 'a' || s[j] == 'o' || s[j]== 'a' ||  s[j] == 'u' || s[j] == 'a' || s[j]== 'i' || s[j]=='e'
                    || s[j]== 'o' || s[j]=='e' || s[j]== 'u' || s[j]=='e' || s[j]== 'o' || s[j]=='i' || s[j]== 'u' || s[j]=='i')
            {
                c++;

            }
        }
        if (c>2)
        {
            cout<<"Happy"<<endl;
        }
        else
        {
            cout<<"Sad"<<endl;
        }
    }



    return 0;
}
