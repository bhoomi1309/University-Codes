#include<stdio.h>

int main(){
	printf("Count Digits of Number\n");
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	int count=countDigits(n);
	printf("Ans = %d",count);
}

int countDigits(int n){
	if(n==0){
		return 0;
	}
	return 1+countDigits(n/10);
}
