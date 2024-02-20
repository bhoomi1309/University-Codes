#include<stdio.h>
int power(int x,int y);
void main(){
	int x,y;
	printf("Power of a Number using Recursion");
	printf("\nEnter base(x): ");
	scanf("%d",&x);
	printf("Enter power(y): ");
	scanf("%d",&y);
	printf("Power: %d^%d = %d",x,y,power(x,y));
}
int power(int x,int y){
	if(y>0){
		return x*power(x,y-1);
	}
	else{
		return 1;
	}
}
