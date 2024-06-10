#include <iostream>
using namespace std;

int main  ()
{
    int N, T, i, binary[100],j, c=0;
    cin>>N;
    for (i=0; N>0; i++)
    {
        binary[i] = N%2;
        N = N/2;
        c++;
    }
    for (j=c-1; j>=0; j--)
    {
        cout<<binary[j];
    }
    cout<<endl;

    return 0;
}
