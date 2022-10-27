#include <stdio.h>

int main(int argc, char **argv)
{
	// defining variable
	int resultMark;
	
	// getting input from user
	printf("Enter your mark: ");
	scanf("%d", &resultMark);
	
	// Maximum limit is 100 , Minimum limit is 0 
	if(resultMark > 100 || resultMark < 0) {
		printf("Invalid Mark");
	}
	
	// Grading Condition
	else if (resultMark >= 80 && resultMark <= 100){
		printf("A+");
	}
	else if (resultMark >= 70 && resultMark <= 79){
		printf("A");
	}
	else if (resultMark >= 60 && resultMark <= 69){
		printf("A-");
	}
	else if (resultMark >= 50 && resultMark <= 59){
		printf("B");
	}
	else if (resultMark >= 40 && resultMark <= 49){
		printf("C");
	}
	else if (resultMark >= 30 && resultMark <= 39){
		printf("D");
	}
	else {
		printf("F");
	}
	
	
	return 0;
}

