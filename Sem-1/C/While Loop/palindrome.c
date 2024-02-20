#include<stdio.h>
void main(){
	printf("Palindrome Number");
	printf("\nThe number which remains the same in reverse order");
	int n,i,r=0,a;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		i=n%10;
		r=r*10+i;
		n=n/10;
	}
	if(r==a){
		printf("Palindrome Number");
	}
	else{
		printf("Not a Palindrome Number");
	}
}
