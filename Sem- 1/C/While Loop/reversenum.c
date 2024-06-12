#include<stdio.h>
void main(){
	printf("Number in Reverse Order");
	int n,i,r=0;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	while(n!=0){
		i=n%10;
		r=r*10+i;
		n=n/10;
	}
	printf("Reverse Number = %d",r);
}
