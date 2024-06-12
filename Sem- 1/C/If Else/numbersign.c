#include<stdio.h>
void main(){
	printf("Positive, Negative or Zero");
	int a;
	printf("\nEnter any number: ");
	scanf("%d", &a);
	if(a<0){
		printf("Negative Number");
	}
	else{
		if(a==0){
			printf("Zero");
		}
		if(a>0){
			printf("Positive Number");
		}
	}
}
