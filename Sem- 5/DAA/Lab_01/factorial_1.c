#include<stdio.h>

int main(){
	int n;
	printf("Factorial\n");
	printf("Enter any number: ");
	scanf("%d",&n);
	int ans=1;
	int i;
	for(i=2;i<=n;i++){
		ans*=i;
	}
	printf("%d! = %d",n,ans);
	return 0;
}
