#include<stdio.h>
void main(){
	int p,r,t,i;
	printf("Simple Interest");
	printf("\nEnter principal amount: ");
	scanf("%d",&p);
	printf("Enter rate of interest: ");
	scanf("%d",&r);
	printf("Enter time period: ");
	scanf("%d",&t);
	i=p*r*t/100;
	printf("Simple Interest = %d",i);
}
