#include<stdio.h>

int main(){
	printf("Sum of 1 to n numbers\n");
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int sum=sum1toN(n);
	printf("Ans = %d",sum);
}

int sum1toN(int n){
	if(n==0){
		return 0;
	}
	return n+sum1toN(n-1);
}
