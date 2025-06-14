#include<stdio.h>

int main(){
	printf("Count Digits of Number\n");
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	int count=0;
	while(n!=0){
		n=n/10;
		count+=1;
	}
	printf("Ans = %d",count);
}
