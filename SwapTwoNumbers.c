#include<stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    int temp;

    printf("**** Before ****\n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);

    temp = a; // temp = 10;
    a = b; // a = 5;
    b = temp;// b = 10;

    printf("**** AFTER *****\n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);
}
