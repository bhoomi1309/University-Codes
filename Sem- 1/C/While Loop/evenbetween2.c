#include<stdio.h>
void main(){
	int a,b,c,n;
	printf("Multiplying largest no. from the first 2 with the 3rd one");
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	printf("Enter any number: ");
	scanf("%d",&c);
	switch(a>b){
		case 1:printf("Answer = %d",a*c);
		       break;
		case 0:printf("Answer = %d",b*c);
		       break;
    }
}

