#include<stdio.h>

int main()
{
    float radius , area, PI, circumference_of_circle;

	PI = 3.1416;

    //getting r
    printf("Enter the radius value: ");
    scanf("%f",&radius);

    //calculating the area
    area = PI * radius * radius;
    printf("\nThe area of a circle is: %.3f",area);
    
    // circumference_of_circle
    circumference_of_circle = 2 * PI * radius;
    
     printf("\ncircumference of the circle is: %.3f\n",circumference_of_circle);
    return 0;

}
