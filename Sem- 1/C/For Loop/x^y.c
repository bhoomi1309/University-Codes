#include<stdio.h>
void main(){
	printf("Exponent: x^y");
	int x,y,ans=1,i;
	printf("\nEnter Base(x): ");
	scanf("%d",&x);
	printf("Enter Power(y): ");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		ans=ans*x;
	}
	printf("%d^%d = %d",x,y,ans);
}
