#include <stdio.h>
int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    int div = a-b;
    printf("%d %d\n", sum, div);
    float c, d;
    scanf("%f %f", &c, &d);
    float sum1 = c+d;
    float div1 = c-d;
    printf("%.1f %.1f\n", sum1, div1);


    return 0;
}
