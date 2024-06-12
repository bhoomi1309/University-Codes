#include<stdio.h>
void main(){
	printf("Last Digit- Even or Odd");
	int n;
	printf("\nEnter any integer: ");
	scanf("%d",&n);
	n=n%10;
	if(n%2==0){
		printf("Last digit is Even");
	}
	else{
		printf("Last digit is Odd");
	}
}
