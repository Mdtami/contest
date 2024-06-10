#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int  i,hh,mm,h,m;
    char c;
    while(cin>>hh>>c>>mm){
        cin>>h>>c>>m;

        long long int  w_time=hh*60+mm;
        long long int  s_time=h*60+m;
        long long int time=w_time-s_time;
        if(time<0)
            time=24*60+time;

        printf("%.2lld:%.2lld\n",time/60,time%60);
    }
    return 0;
}
