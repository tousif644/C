#include<stdio.h>

int main()
{
    float base , height ,area;
    printf("Enter Base : ");
    scanf("%f",&base);


    printf("Enter Height: ");
    scanf("%f",&height);

    area = (float)1/2 * base * height;
    printf("Area = %.2f\n",area);
}
