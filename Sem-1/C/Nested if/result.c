#include<stdio.h>
void main(){
	printf("Result");
	int a,b,c,d,e,f,p;
	printf("\nEnter marks of Subject 1: ");
	scanf("%d",&a);
	printf("Enter marks of Subject 2: ");
	scanf("%d",&b);
	printf("Enter marks of Subject 3: ");
	scanf("%d",&c);
	printf("Enter marks of Subject 4: ");
	scanf("%d",&d);
	printf("Enter marks of Subject 5: ");
	scanf("%d",&e);
	f=a+b+c+d+e;
	p=f/5;
	printf("Result percentage = %d",p);
	if(p<=35){
		printf("\nFail");
	}
	else if(p<=45){
        printf("\nPass");		
	}
	else if(p<=60){
		printf("\nSecond Class");
	}
	else if(p<=70){
		printf("\nFirst Class");
	}
	else{
		printf("\nDistinction");
	}
}
