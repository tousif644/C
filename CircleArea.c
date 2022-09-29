#include<stdio.h>

int main()
{
    float r , area;

    //getting r
    printf("Enter the r value: ");
    scanf("%f",&r);

    //calculating the area
    area = 3.1416 * r * r;
    printf("The area of a circle is: %.2f",area);
    return 0;

}
