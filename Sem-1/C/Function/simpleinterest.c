#include<stdio.h>
int simpleinterest(int p,int r,int t);
void main(){
	printf("Simple Interest");
	int p,r,t;
	printf("\nEnter Principal Amount: ");
	scanf("%d",&p);
	printf("Enter Rate of Interest: ");
	scanf("%d",&r);
	printf("Enter Time: ");
	scanf("%d",&t);
	printf("Simple Interest = %d",simpleinterest(p,r,t));
}
int simpleinterest(int p,int r,int t){
	int si=(p*r*t)/100;
	return si;
}
