#include <bits/stdc++.h>
int gcd(int x, int y)
{
    while (x %= y)
    {
        int t = x;
        x = y;
        y = t;
    }
    return y;
}
int main()
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    int ans = gcd(gcd(x, y), z);
    printf("%d",ans);
    return 0;
}
