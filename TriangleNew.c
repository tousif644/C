#include<stdio.h>

int main()
{
    float base, height, area;

    //getting base from user
    printf("Enter the base: ");
    scanf("%f",&base);

    // getting height from user
    printf("Enter the height: ");
    scanf("%f",&height);

    // calculating the area
    area = (float) 1 / 2 * base * height;
    printf("Area is : %.2f",area);

    return 0;
}
