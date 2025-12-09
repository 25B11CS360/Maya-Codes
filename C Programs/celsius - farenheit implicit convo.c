#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter temp in celcius:");
	scanf("%f",&celsius);
	fahrenheit=(1.8*celsius) + 32;
	printf("temerature in fahrenheit:%.2c",fahrenheit);
}
