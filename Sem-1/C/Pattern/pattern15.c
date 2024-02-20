#include<stdio.h>
void main(){
	printf("Pattern");
	int i,j,n;
	printf("\nEnter no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	for(i=n;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
