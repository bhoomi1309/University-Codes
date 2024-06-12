#include<stdio.h>
int main(){
	int n;
	float x;
	printf("Electricity Bill");
	printf("\nEnter no. of units: ");
	scanf("%d",&n);
	if(n<51){
		x=n*0.50;
	}
	else if(n<151){
		x=(50*0.50)+((n-50)*0.75);
	}
	else if(n<251){
		x=(50*0.50)+(100*0.75)+((n-150)*1.20);
	}
	else{
		x=(50*0.50)+(100*0.75)+(100*1.20)+((n-250)*1.50);
	}
	x=x+(0.20*x);
	printf("Bill Amount = %f",x);
}
