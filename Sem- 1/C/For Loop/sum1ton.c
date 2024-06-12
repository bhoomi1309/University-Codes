#include<stdio.h>
void main(){
	printf("Sum of 1 to n numbers");
	int i,n,sum=0;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("Sum: 1+2+..+%d = %d",n,sum);
}
