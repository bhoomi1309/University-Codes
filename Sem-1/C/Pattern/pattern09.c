#include<stdio.h>
void main(){
	printf("Pattern");
	int i,j,n,a;
	printf("\nEnter the no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	a=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
}
