#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	a = getIntegerOnly();
	printf("You have entered: %d",a);
	getch();
}
int getIntegerOnly(){
	int num = 0, ch;
	do{
		ch = getch();
		if(ch >= 48 && ch <= 57){
			printf("%c",ch);
			num = num * 10 + (ch - 48);
		}
		if(ch == 13){
			break;
		}
	}
	while(1);
	return(num);
}
