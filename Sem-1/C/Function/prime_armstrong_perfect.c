#include<stdio.h>
#include"prime_armstrong_perfect.h"
void main(){
	int n;
	printf("Prime, Armstrong, Perfect");
	printf("\nEnter any number: ");
	scanf("%d",&n);
	if(prime(n)==0){
		printf("Prime Number\n");
	}
	else{
		printf("Not a Prime Number\n");
	}
	if(armstrong(n)==0){
		printf("Armstrong Number\n");
	}
	else{
		printf("Not an Armstrong Number\n");
	}
	if(perfect(n)==0){
		printf("Perfect Number");
	}
	else{
		printf("Not a Perfect Number");
	}
}
