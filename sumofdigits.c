#include<stdio.h>

int main(){
	int n, temp, sum = 0;
	
	printf("Enter any number: ");
	scanf("%d",&temp);
	
	for(n = 0; n <= temp; n++){
		sum = ( sum / n ) * temp;
		printf("%d + %d\n",sum, n);
	}
	printf("\nTotal is: %d",sum);
	return 0;

}
	
