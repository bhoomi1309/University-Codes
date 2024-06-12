#include<stdio.h>
void main(){
	printf("Pattern\n");
	int i,j,sum,n;
	printf("Enter no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=(2*n-1);j++){
			sum=i+j;
			if(j>=i){
				if(sum%2==0&&sum<=(2*n)){
				    printf("*");
			    }
			    else{
				    printf(" ");
			    }
			}
			else{
				printf(" ");
			}
	     }
		printf("\n");
	}
}
