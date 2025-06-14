#include<stdio.h>

int main(){
	printf("Sum of 1 to n numbers\n");
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int sum=0;
	int i;
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("Ans = %d",sum);
}
