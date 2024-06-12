#include<stdio.h>
int factorial(int n);
void main(){
	printf("Factorial of a Number using Recursion\n");
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf("Facorial of %d = %d",n,factorial(n));
}
int factorial(int n){
	if(n>1){
		return n*factorial(n-1);
	}
	else{
		return 1;
	}
}
