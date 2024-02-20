#include<stdio.h>
void swap2num(int a,int b);
void main(){
	int a,b;
	printf("Swap 2 Numbers: Call by Value");
	printf("\nEnter Number 1: ");
	scanf("%d",&a);
	printf("Enter Number 2: ");
	scanf("%d",&b);
	swap2num(a,b);
}
void swap2num(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	printf("After Swapping: ");
	printf("\nNumber 1: %d",a);
	printf("\nNumber 2: %d",b);
}
