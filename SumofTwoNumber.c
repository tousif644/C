#include<stdio.h>

int main()
{
    int num1, num2, sum,  multi;
    float avg;
    printf("Enter any two number : ");
    scanf("%d %d",&num1,&num2);

    // Addition
    sum = num1 + num2;
    printf("Sum of the two number is : %d\n",sum);

    //Average
    avg = (float)sum / 2;
    printf("Average of the two number is : %.2f\n",avg);
    return 0;
}
