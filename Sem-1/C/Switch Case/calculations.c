#include<stdio.h>
void main(){
	printf("Calculations");
	int a,b;
	char c;
	printf("\nEnter operator sign: ");
	scanf("%c",&c);
	printf("Enter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	switch(c){
		case '+':printf("%d + %d = %d",a,b,a+b);
		        break;
	    case '-':printf("%d - %d = %d",a,b,a-b);
		        break;
		case '*':printf("%d * %d = %d",a,b,a*b);
		        break;
		case '/':printf("%d / %d = %d",a,b,a/b);
		        break;
	}
}
