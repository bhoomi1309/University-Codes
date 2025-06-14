#include<stdio.h>

int main(){
	int n;
	printf("Factorial\n");
	printf("Enter any number: ");
	scanf("%d",&n);
	int ans=factorial(n);
	printf("%d! = %d",n,ans);
}

int factorial(int n){
	if(n==0 || n==1){
		return 1;
	}
	return n*factorial(n-1);
}
