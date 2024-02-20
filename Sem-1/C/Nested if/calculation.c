#include<stdio.h>
int main(){
	printf("Calculations");
	int a,b,c;
	//char mutable;
	mutable='kk';
	printf("\nEnter any value: ");
	scanf("%d",&a);
	printf("Enter a number as per the operation\n\tAddition(1)\n\tSubtraction(2)\n\tMultiplication(3)\n\tDivision(4)        : ");
	scanf("%d",&b);
	printf("Enter any value: ");
	scanf("%d",&c);
	if(b==1){
		printf("%d + %d = %d",a,c,a+c);
	}
	else if(b==2){
		printf("%d - %d = %d",a,c,a-c);
	}
	else if(b==3){
		printf("%d * %d = %d",a,c,a*c);
	}
	else if(b==4){
		printf("%d / %d = %d",a,c,a/c);
	}
	else{
		printf("Invalid Input");
	}
}
