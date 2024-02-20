#include<stdio.h>
void main(){
	printf("Pattern\n");
	int i,j,n;
	printf("Enter the no. of rows to print: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(j==1||j==2*i-1||i==n){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
