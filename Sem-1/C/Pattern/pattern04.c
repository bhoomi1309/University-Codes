#include<stdio.h>
void main(){
	printf("Pattern");
	int i,j,n;
	printf("\nEnter the no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(n<10){
				printf("%d",i);
			}
			else{
				printf("%02d ",i);
			}
		}
		printf("\n");
	}
}
