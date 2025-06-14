#include<stdio.h>

int power(int b,int p);

int main(){
	printf("Power function\n");
	int b,p;
	printf("Enter base number: ");
	scanf("%d",&b);
	printf("Enter power number: ");
	scanf("%d",&p);
	int ans=power(b,p);
	printf("%d raised to %d = %d",b,p,ans);
}

int power(int b,int p){
	if(p==0){
		return 1;
	}
	return b*power(b,p-1);
}
