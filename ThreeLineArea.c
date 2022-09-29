#include<stdio.h>

int  main()
{
    float a, b, c, s, area;

    // getting a value
    printf("Enter the a value: ");
    scanf("%f",&a);

    //getting b value
    printf("Enter the b value: ");
    scanf("%f",&b);

    //getting c value
    printf("Enter the c value: ");
    scanf("%f",&c);

    s = (a + b + c) / 2;
    printf("The value of S is : %.3f\n",s);

    // Laslty area
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area is : %.3f\n",area);

    return 0;

}
