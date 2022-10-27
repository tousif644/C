#include <stdio.h>

int main()
{
	// defining the variables
	int options;
	float temperature, convertedTemp;
	
	// Priniting Instruction and getting input of choice
	printf("Temperature Conversion Menu\n\n");
	printf("1.Fahrenheit to Celsius\n\n");
	printf("2.Celsius to Fahrenheit\n\n");
	printf("Enter any choice you want: ");
	scanf("%d",&options);
	
	
	// Conditions using Switch here 1, 2 taking from users
	// while 1 it can convert celsius to fahrenheit
	// while 2 it can convert fahrenheit to celsius
	// only 2 options available entering other input will not be accepted
	
	switch(options)
	{
		case 1: {
			printf("Enter the temperature for fahrenheit: ");
			scanf("%f",&temperature);
			convertedTemp = (temperature - 32) / 1.8;
			printf("Converted Temperature is %.3f degree celsius",convertedTemp);
			break;
		}
		case 2:{
			printf("Enter the temperature for celsius: ");
			scanf("%f",&temperature);
			convertedTemp = (1.8 * temperature) + 32;
			printf("Converted Temperature is %.3f degree fahrenheit", convertedTemp);
			break;
		}
		default:
			printf("Invalid options");
			break;
	}
	
	
	return 0;
}

