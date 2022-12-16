#include <stdio.h>
int main ()
{
    int T, A, B, i, sum;
    scanf("%d\n", &T);
    for (i=; i<=T; i++)
    {
        scanf("%d %d", &A, &B);
        sum = A+B;
        printf("%d\n", sum);
    }
    return 0;
}
