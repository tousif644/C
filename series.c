#include<stdio.h>

int main() {

    int num, i,sum;

    printf("Enter any number: ");
    scanf("%d",&num);

    printf("1+2+3+4........+%d",num);

    for(i=1;i<=num;i = i+1){
        sum = sum + i;
    }

    printf(" = %d\n",sum);

    return 0;
}
