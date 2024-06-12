#include<stdio.h>
int main(){
	int i,j,k=1,n;
	printf("Pattern");
	printf("\nEnter no. of rows: ");
	scanf("%d",&n);
	printf("\n");
	for(i=n;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=k;j++){
			printf("*");
		}
		k++;
		printf("\n");
	}
	k--;
	k--;
	for(i=1;i<=n-1;i++){
		for(j=1;j<=n-1-i;j++){
			printf(" ");
		}
		for(j=1;j<=k;j++){
			printf("*");
		}
		k--;
		printf("\n");
	}
}
