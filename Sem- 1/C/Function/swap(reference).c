#include<stdio.h>
int swap2num(int *a,int *b);
void main(){
	int a,b;
	printf("Swap 2 Numbers: Call by Reference");
	printf("\nEnter Number 1: ");
	scanf("%d",&a);
	printf("Enter Number 2: ");
	scanf("%d",&b);
	swap2num(&a,&b);
	printf("After Swapping: ");
	printf("\nNumber 1: %d",a);
	printf("\nNumber 2: %d",b);
}
int swap2num(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
