#include<stdio.h>
void main(){
	printf("Equality of 2 Numbers without Arithematic or Comparison Operator");
	int a,b;
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	(a^b==0)?printf("Equal"):printf("Not Equal");
}
