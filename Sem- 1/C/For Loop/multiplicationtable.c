#include<stdio.h>
void main(){
	printf("Multiplication Table");
	int i,n;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	printf("Table of %d\n",n);
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
