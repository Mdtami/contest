#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n,k;cin>>n;
    k == 1== January;
      k == 2== February;
        k == 3== March;
          k == 4== April;
            k == 5== May;
              k == 6== June;
                k == 7== July;
                  k == 8== August;
                    k == 9== September;
                      k == 10== October;
                        k == 11== November;
                          k == 12==December;
    if(n<13){
        n+=k;
        cout<<n<<endl;
        n = n%12; cout<<n<<endl;
        if(n==2){
        cout<<k<<endl;
        }
    }
}