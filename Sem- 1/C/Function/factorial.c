#include<stdio.h>
int factorial(int n);
void main(){
	printf("Factorial of a Number\n");
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf("Factorial of %d: %d",n,factorial(n));
}
int factorial(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
