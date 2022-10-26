#include<stdio.h>

int main()
{
    float num1;
    double result;
    printf("Enter any number: ");
    scanf("%f",&num1);
    result = exp(num1);
    printf("EXP(%f) = %.3lf\n",num1,result);
    return 0;
}
