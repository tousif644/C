#include <stdio.h>
#include <math.h>

int main()
{
    // your code goes here
    double w1, w2, w3, w4, w5, w6, w7, w8, w9, w10, sumTotal;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &w1, &w2, &w3, &w4, &w5, &w6, &w7, &w8, &w9, &w10);

    // average
    sumTotal = (w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10) / 10;
    printf("%lf\n", sumTotal);
    return 0;
}
