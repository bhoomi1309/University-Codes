#include<stdio.h>
void main(){
	printf("Temperature Conversion");
	int f,c;
	printf("\nEnter temperature in Fahrenheit: ");
	scanf("%d",&f);
	c=(f-32)*5/9;
	printf("In Celsius: %d",c);
}
