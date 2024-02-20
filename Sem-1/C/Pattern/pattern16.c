#include<stdio.h>
void main(){
	int i,j,n;
	printf("Pattern");
	printf("\nEnter no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if((i+j)%2!=0){
				printf("0 ");
			}
			else{
				printf("1 ");
			}
		}
		printf("\n");
	}
}
