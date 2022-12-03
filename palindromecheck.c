#include<stdio.h>
#include<ctype.h>


int main(){

	char s [100];
	scanf("%s",s);

	int i, count=0;
	// the length of a string
	for(i=0;s[i] != '\0'; i++){
		s[i] = tolower(s[i]);
	}

    printf("%d\n",i);
    printf("%s\n",s);
	// Checking for the length of the integer


	// Palindrome Check

	if(i <= 100){
		int temp, r, sum = 0;
		temp = i;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }

    if (i == sum)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

	}




	return 0;
}

