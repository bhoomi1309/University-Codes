#include<stdio.h>
void main(){
	printf("Factorial of a Number");
	int ans=1,n,i;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		ans=ans*i;
	}
	printf("Factorial of %d = %d",n,ans);
}
