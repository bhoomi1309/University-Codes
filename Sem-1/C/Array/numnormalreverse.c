#include<stdio.h>
void main(){
	printf("Numbers in Normal and Reverse Order");
	int i,j,n;
	printf("\nHow many numbers do you want to enter? ");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<=n-1;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&num[i]);
	}
	printf("Numbers:");
	for(i=0;i<=n-1;i++){
		printf(" %d",num[i]);
	}
	printf("\n");
	printf("Reverse Order:");
	for(j=n-1;j>=0;j--){
		printf(" %d",num[j]);
	}
}
