#include <stdio.h>

int main(int argc, char **argv)
{
	// defining the variable
	int year;
	
	// Taking input from user
	printf("Enter the year: ");
	scanf("%d",&year);
	
	// Condition
	if(year % 400 == 0){
		printf("This is Leap year");
	}
	else if (year % 4 == 0 && year % 100 !=0){
		printf("This is Leap year");
	}
	else {
		printf("This year is not Leap year");
	}
	
	return 0;
}

