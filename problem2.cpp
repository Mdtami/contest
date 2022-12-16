#include <stdio.h>
int main ()
{
    int a, b;
    scanf("%a %b", &a, &b);
    int sum = a+b;
    int div = a-b;
    printf("%d %d", sum, div);
    float c, d;
    scanf("%f %f", &c, &d);
    int sum1 = c+d;
    int div1 = c-d;
    printf("%.1f %.1f", sum1, div1);

    return 0;
}
