#include<stdio.h>
void main(){
	printf("Value of the Mathematical Constant 'e'");
	int i,j;
	float sum=1,reciprocal,ans=1,n;
	printf("\nEnter no. of terms: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		    ans=ans*j;
	    }
	    reciprocal=1/ans;
	    sum=sum+reciprocal;
	}
	printf("e = %f",sum);
}
