#include<stdio.h>
void main(){
	printf("Permutation and Combination");
	int n,r;
	printf("\nEnter n: ");
	scanf("%d",&n);
	printf("Enter r: ");
	scanf("%d",&r);
	printf("Permutation %dP%d = %d",n,r,factorial(n)/factorial(n-r));
	printf("\nCombination %dC%d = %d",n,r,factorial(n)/(factorial(r)*factorial(n-r)));
}
int factorial(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
