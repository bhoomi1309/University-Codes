#include<stdio.h>
void main(){
	printf("Type of Triangle");
	int a,b,c;
	printf("\nEnter all the sides of a triangle: ");
	printf("\nSide 1: ");
	scanf("%d",&a);
	printf("Side 2: ");
	scanf("%d",&b);
	printf("Side 3: ");
	scanf("%d",&c);
	if(a==b && b==c){
		printf("Equilateral Triangle");
	}
	else if(a==b || b==c || c==a){
		printf("Isoceles Triangle");
	}
	else if( (a*a+b*b==c*c) || (c*c+b*b==a*a) || (a*a+c*c==b*b) ){
		printf("Right-angled Triangle");
	}
	else if((a!=b) && (b!=c)){
		printf("Scalene Triangle");
	}
}
