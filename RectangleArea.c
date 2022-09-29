#include<stdio.h>

int main()
{
    float length, width , totalArea;

    // getting length
    printf("Enter the length: ");
    scanf("%f",&length);

    //getting width
    printf("Enter the width: ");
    scanf("%f",&width);

    // calculating the area
    totalArea = length * width;
    printf("Total area is: %.2f",totalArea);

    return 0;
}
