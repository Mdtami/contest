#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int n1 = a;
    int n2 = b;
   while(n2 !=0){
    int rem = n1%n2;
    n1 = n2;
    n2 = rem;
   }
   cout<<n1<<endl;//gec value
   int res = (a*b)/n1;
   cout<<res<<endl;//lcd value
}
