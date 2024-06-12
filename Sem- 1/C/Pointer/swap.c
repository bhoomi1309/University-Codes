#include<stdio.h>
void main(){
	printf("Swap 2 Numbers");
	int a,b,*p,*q,temp;
	printf("\nEnter any Value: ");
	scanf("%d",&a);
	printf("Enter any Value: ");
	scanf("%d",&b);
	p=&a;
	q=&b;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("Numbers Swapped-\nNumber 1: %d\nNumber 2: %d",*p,*q);
}
