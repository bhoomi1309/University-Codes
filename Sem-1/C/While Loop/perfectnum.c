#include<stdio.h>
void main(){
	printf("Perfect Number");
	int n,i=1,sum=0;
	printf("\nThe sum of factors of a number except the number itself is equal to the number itself!");
	printf("\nEnter any number: ");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		printf("Perfect Number");
	}
	else{
		printf("Not a Perfect Number");
	}
}
