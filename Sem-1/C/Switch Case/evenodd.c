#include<stdio.h>
void main(){
	printf("Odd Even using Conditional Operator");
	int n;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	(n%2==0)?printf("Even Number"):printf("Odd Number");
}
