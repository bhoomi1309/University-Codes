#include<stdio.h>
void main(){
	int i,j,n;
	printf("Diamond Pattern");
	printf("\nEnter no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=(n+1)/2;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(j==1||j==2*i-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=(n-1)/2;i>=1/2;i--){
		    for(j=1;j<=n-i;j++){
			    printf(" ");
		    }
		    for(j=1;j<=2*i-1;j++){
			    if(j==1||j==2*i-1){
				    printf("*");
			    }
			    else{
				    printf(" ");
			    }
		    }
		printf("\n");
	}
}
