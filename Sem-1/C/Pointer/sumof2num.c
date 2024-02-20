#include<stdio.h>
void main(){
	printf("Sum of 2 Numbers");
	int a,b,*p,*q;
	printf("\nEnter any Value: ");
	scanf("%d",&a);
	printf("Enter any Value: ");
	scanf("%d",&b);
	p=&a;
	q=&b;
	printf("Sum: %d + %d = %d",*p,*q,*p+*q);
}
