#include<stdio.h>
void main(){
	int n=1;
	printf("Squares of numbers from 1 to 10\n");
	printf("Number \t Square");
	while(n<=10){
		printf("\n  %d \t   %d",n,n*n);
		n++;
	}
}
