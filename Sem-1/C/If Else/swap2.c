#include<stdio.h>
int main(){
	printf("Swap 2 Numbers");
	int a,b;
	printf("\nEnter any number(a): ");
	scanf("%d",&a);
	printf("Enter any number(b): ");
	scanf("%d",&b);
    a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping numbers: ");
	printf("\na = %d",a);	
	printf("\nb = %d",b);
}
