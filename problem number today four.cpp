#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
    int A, B, X;
    cin>>X>>A>>B;

    int result = (X-A);
    int result2 = result/B;
    int result3 = result2*B;
    int result4 = result - result3;
    cout<<result4<<endl;
    return 0;
}
