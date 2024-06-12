#include<stdio.h>
void main(){
	printf("Pointers: char, int, float, double\n\n");
	char a,*p;
	printf("Pointer char\n");
	printf("Enter any Character: ");
	scanf("%c",&a);
	p=&a;
	printf("Value: %c",a);
	printf("\nAddress: %d",p);
	int b,*q;
	printf("\n\nPointer int\n");
	printf("Enter any Integer: ");
	scanf("%d",&b);
	q=&b;
	printf("Value: %d",b);
	printf("\nAddress: %d",q);
	float c,*r;
	printf("\n\nPointer float\n");
	printf("Enter any Float Value: ");
	scanf("%f",&c);
	r=&c;
	printf("Value: %f",c);
	printf("\nAddress: %d",r);
	double d,*s;
	printf("\n\nPointer double\n");
	printf("Enter any Double Value: ");
	scanf("%ld",&d);
	s=&d;
	printf("Value: %ld",d);
	printf("\nAddress: %d",s);
}
