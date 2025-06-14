#include<stdio.h>

int main(){
	printf("Power function\n");
	int base,power;
	printf("Enter base number: ");
	scanf("%d",&base);
	printf("Enter power number: ");
	scanf("%d",&power);
	int ans=base;
	int i;
	for(i=2;i<=power;i++){
		ans*=base;
	}
	printf("%d raised to %d = %d",base,power,ans);
}
