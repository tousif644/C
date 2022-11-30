/* 1 + 2 + 3 + 4 + 5 = 15
 * 1 + 3 + 5 + 7 + 9 = 25
 */

#include<stdio.h>
int main(){
	
	int n, sum= 0, a = 1;
	printf("Enter the last number: ");
	scanf("%d",&n);
	
	printf("1 + 2 + 3 + ....... + %d" ,n);
	
	while(a <= n){
		sum = sum + a;
		a++;
	}
	
	printf(" = %d\n",sum);
	
		
	return 0;
}
