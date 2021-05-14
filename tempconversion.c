#include<stdio.h>
/*temperature conversion in celcuis to Fahrenheit */
int main()
{
	/*declaring where c represents temperature in Celsius and f is temp in Fanhrenheit*/
	
	float c,f;
	/*processing*/
	printf("Enter temperature in celsius:");
	scanf("%f",&c);
	
	/*temperature in Fanhrenheit*/
	f=(1.8*c)+32;
	printf("\nThe temperature in Fanhrenheit=%f",f);
	return 0;
}
