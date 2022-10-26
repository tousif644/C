#include<stdio.h>

int main()
{
    int num1;
    double result;
    printf("Enter any value: ");
    scanf("%d",&num1);
    result = sqrt(num1);
    printf("The result is : %.2lf",result);
    return 0;
}
