#include<stdio.h>
void main(){
	int i,j,n;
	printf("Pattern");
	printf("\nEnter the no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
