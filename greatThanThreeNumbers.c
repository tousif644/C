#include<stdio.h>

int main() {
	
	// defining variables
	int num1, num2, num3;
	
	// getting input from user
	printf("Enter any three number one after one: ");
	scanf("%d %d %d", &num1,&num2,&num3);
	
	// condition
	if(num1 > num2 && num1 > num3){
		printf("Large Number: %d\n",num1);
	}
	else if(num2 > num1 && num2 > num3){
		printf("Large Number: %d\n",num2);
	}
	else if(num3 > num1 && num3 > num2){
		printf("Large Number: %d\n",num3);
	}
	else {
		printf("All the three numbers are equal");
	}
	
	return 0;
}
