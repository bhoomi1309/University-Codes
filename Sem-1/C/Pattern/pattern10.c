#include<stdio.h>
void main(){
	int i,j,n,a;
	printf("Pattern");
	printf("\nEnter no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	a=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",a);
			if(a==1){
				a=0;
			}
			else{
				a=1;
			}
		}
		printf("\n");
	}
}
