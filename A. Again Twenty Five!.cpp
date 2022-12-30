#include <bits/stdc++.h>
#include<sstream>
#include <math.h>
#include <string>
using namespace std;
int main ()
{
long long int n,c=0,j,k;cin>>n;
long long int result = pow(5,n);
stringstream ss;
ss<<result;
for ( j=0; result[j] != '\0'; j++){
    c++;
}
 k = ss.size();
//cout<<k<<endl;

cout<<ss<<endl;


return 0;
}
