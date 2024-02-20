#include<stdio.h>
void main(){
	int i,j,n;
	printf("Outer Diamond");
	printf("\nEnter no. of rows: ");
	scanf("%d",&n);
	printf("\n");
	for(i=n;i>=1;i--){
		for(j=1;j<=2*n-1;j++){
			if(i+j<2*n&&j>i){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	for(i=2;i<=n;i++){
		for(j=1;j<=2*n-1;j++){
			if(i+j<2*n&&j>i){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
