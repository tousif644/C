#include <stdio.h>

int main()
{
    // your code goes here

    int n, temp, r;
    scanf("%d", &n);

    temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        temp = temp / 10;
    }

    printf("%d", r);
    return 0;
}
