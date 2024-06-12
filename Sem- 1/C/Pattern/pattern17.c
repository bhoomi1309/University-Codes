#include<stdio.h>
void main(){
	int i,j,a,n,b;
	printf("Pattern\n");
	printf("Enter no. of rows: ");
	scanf("%d",&n);
	printf("\n");
	b=3+4*(n-2);
	for(i=1;i<=n;i++){
		a=2*i-1;
		for(j=1;j<=b;j++){
			if(j>a && j<=b-a){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
