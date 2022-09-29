#include<stdio.h>

int main()
{
    float num1 , num2 , num3 , sum, avg;
    printf("Enter any Three numbers : ");
    scanf("%f %f %f",&num1, &num2, & num3);

    //showing the sum of three numbers
    sum = num1 + num2 + num3;
    printf("The sum of the three number is : %.2f\n",sum);

    //Average of three numbers
    avg = (float)sum / 3;
    printf("Average of the three number is : %.2f\n",avg);
    return 0;
}
