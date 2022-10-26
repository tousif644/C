#include<stdio.h>

int main()
{
    float v, r;
    float pie = 3.14;

    printf("Enter the value of r: ");
    scanf("%f",&r);

    v = ( 4 / 3 ) * (pie * r * r *r);
    printf("Result is: %.2f",v);
    return 0;
}
