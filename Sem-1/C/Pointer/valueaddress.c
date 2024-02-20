#include<stdio.h>
void main(){
	printf("Value and Address of a Variable");
	int n,*p;
	printf("\nEnter any Value: ");
	scanf("%d",&n);
	p=&n;
	printf("Value: %d",n);
	printf("\nAddress: %d",p);
}
