#include<stdio.h>
void main(){
	printf("Sum of Series: 1+(1+2)+(1+2+3)+...+(1+2+3+..+n)");
	int i,j,n,sum1=0,sum2=0;
	printf("\nEnter value for n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum1=0;
		for(j=1;j<=i;j++){
			sum1=sum1+j;
		}
		sum2=sum2+sum1;
	}
	printf("Sum = %d",sum2);
}
