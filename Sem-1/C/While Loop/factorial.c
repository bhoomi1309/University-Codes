#include<stdio.h>
void main(){
	printf("Factorial of a Number");
	int n,i=1,ans=1;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	while(i<=n){
		ans=ans*i;
		i++;
	}
	printf("Factorial: %d! = %d",n,ans);
}
