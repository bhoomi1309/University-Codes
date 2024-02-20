#include<stdio.h>
void main(){
	printf("Even or Odd");
	printf("\nEnter any number: ");
	int a;
	scanf("%d" , &a);
	if(a%2==0){
		printf("Even Number");
	}
	else{
	    printf("Odd Number");
	}
}
