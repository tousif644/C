#include <stdio.h>

int main(int argc, char **argv)
{
	// definig one single character value
	char letter;
	
	// taking input
	printf("Enter any letter you want: ");
	scanf("%c",&letter);
	
	// condition
	if(letter >= 'a' && letter <= 'z'){
		printf("Small letter");
	}
	else if(letter >= 'A' && letter <= 'Z'){
		printf("Capital letter");
	}
	else {
		printf("Number and symbol or any kind of big string are not accepted");
	}
	
	return 0;
}

