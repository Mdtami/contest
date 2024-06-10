#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    int result = a-(b+c);
    if (result > 0){
    cout<<"0"<<endl;
    }else{
    cout<<abs(result)<<endl;
    }

    return 0;
}
