#include <stdio.h>

int main()
{
    int num, temp, r, sum = 0;
    printf("Enter the number to check: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }

    if (num == sum)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not palindrome");
    }
}