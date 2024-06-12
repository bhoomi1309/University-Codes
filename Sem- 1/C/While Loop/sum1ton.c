#include<stdio.h>
void main(){
	int n,i=1,sum=0;
	printf("Sum of 1 to n");
	printf("\nEnter any number: ");
	scanf("%d",&n);
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("Sum = %d",sum);
}
