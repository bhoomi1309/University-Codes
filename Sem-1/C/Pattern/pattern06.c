#include<stdio.h>
void main(){
	int i,j,n;
	printf("Pattern");
	printf("\nEnter no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			if(n<10){
				printf("%d",j);
			}
			else{
				printf("%02d ",j);
			}
		}
		printf("\n");
	}
}
