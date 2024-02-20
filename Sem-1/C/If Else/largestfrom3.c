#include<stdio.h>
int main(){
	int a,b,c;
	printf("Largest from 3 numbers");
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	printf("Enter any number: ");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("Largest Number = %d",a);
		}
		else{
			printf("Largest Number = %d",c);
		}
	}
	else{
		if(b>c){
			printf("Largest Number = %d",b);
		}
		else{
			printf("Largest Number = %d",c);
		}
	}
}
