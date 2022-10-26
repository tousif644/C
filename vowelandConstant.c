#include<stdio.h>

int main() {
	
	// defining variables
	char letter;
	
	// getting input from user
	printf("Enter any letter: ");
	scanf("%c", &letter);
	
	// condition
	if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
	letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
		printf("Vowel");
	}

	else {
		printf("Constant");
	}
	
	return 0;
}
