#include<stdio.h>

int main()
{
    printf("***** Celsius to Fahrenheit Converter Program   *****\n");
    float celsius, fahrenheit;

    printf("Enter the Celsius: ");
    scanf("%f",&celsius);

    fahrenheit = (celsius * 1.8) + 32;
    printf("Converted Fahrenheit is: %.2f\n",fahrenheit);

    return 0;

}
