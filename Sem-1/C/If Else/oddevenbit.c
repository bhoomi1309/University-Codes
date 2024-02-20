#include<stdio.h>
int main(){
	printf("Odd Even by Bitwise Operator");
	int n;
	printf("\nEnter any value: ");
	scanf("%d",&n);
	if(n&1==1){
		printf("Odd Number");
	}
	else{
		printf("Even Number");
	}
}
