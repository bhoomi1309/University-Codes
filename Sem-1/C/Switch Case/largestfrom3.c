#include<stdio.h>
void main(){
	printf("Largest from 3 Numbers using Conditional Operator");
	int a,b,c;
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	printf("Enter any number: ");
	scanf("%d",&c);
	(a>b)?((a>c)?(printf("Largest Number = %d",a)):(printf("Largest Number = %d",b))):((b>c)?(printf("Largest Number = %d",b)):(printf("Largest Number = %d",c)));
}
