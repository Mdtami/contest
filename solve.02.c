#include <bits/stdc++.h>
using namespace std;
int main ()
{
int t,a,b,c,d;cin>>t;
for (int i=1; i<=t; i++){
cin>>a>>b>>c>>d;
if (a == b && b==c && c == d && d==a){
cout<<"No"<<endl;
}else if (a== b && c==d){
cout<<"No"<<endl;
}else if (a<b && d<c){
cout<<"No"<<endl;
}else{
cout<<"Yes"<<endl;
}
}



return 0;
}
