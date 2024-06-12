#include<stdio.h>
void main(){
	int n,i=2,sum=1;
	printf("Sum of Series: 1-2+3-4+..");
	printf("\nEnter any number: ");
	scanf("%d",&n);
	printf("Sum: 1");
	while(i<=n){
		if(i%2!=0){
			printf("+%d",i);
			sum=sum+i;
			i++;
		}
		else{
			printf("-%d",i);
			sum=sum-i;
			i++;
		}
	}
	printf(" = %d",sum);
}
