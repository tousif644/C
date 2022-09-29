#include<stdio.h>

int main()
{
    printf("***** Fahrenheit to Celsius Converter Program   *****\n");
    float celsius , fahrenheit;
    printf("Enter the Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius= (5 * fahrenheit - 160) / 9;
    printf("Converted Celsius is : %.2f",celsius);
    return 0;
}
