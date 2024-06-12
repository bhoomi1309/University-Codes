#include<stdio.h>
void main(){
	int a,b,c;
	printf("Second Largest Number");
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	printf("Enter any number: ");
	scanf("%d",&c);
	if(a>b){
		if(b>c){
			printf("Second Largest Number = %d",b);
		}
		else{
			if(a>c){
				printf("Second Largest Number = %d",c);
			}
			else{
				printf("Second Largest Number = %d",a);
			}
		}
	}
	else{
		if(a>c){
			printf("Second Largest Number = %d",a);
		}
		else{
			if(b>c){
				printf("Second Largest Number = %d",c);
			}
			else{
				printf("Second Largest Number = %d",b);
			}
		}
	}
	
}
