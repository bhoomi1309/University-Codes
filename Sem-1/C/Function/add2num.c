#include<stdio.h>
int add2num(int a,int b);
void main(){
	printf("Add 2 Numbers");
	int a,b;
	printf("\nEnter Number 1: ");
	scanf("%d",&a);
	printf("Enter Number 2: ");
	scanf("%d",&b);
	printf("Sum = %d",add2num(a,b));
}
int add2num(int a,int b){
	int c=a+b;
	return c;
}
