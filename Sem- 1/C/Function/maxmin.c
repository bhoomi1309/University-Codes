#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
void main(){
	int a,b;
	printf("Maximum and Minimum between 2 Numbers\n");
	printf("Enter Number 1: ");
	scanf("%d",&a);
	printf("Enter Number 2: ");
	scanf("%d",&b);
	printf("Maximum = %d",max(a,b));
	printf("\nMinimum = %d",min(a,b));
}
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int min(int a,int b){
	if(a>b){
		return b;
	}
	else{
		return a;
	}
}

