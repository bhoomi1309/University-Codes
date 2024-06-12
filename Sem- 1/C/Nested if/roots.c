#include<stdio.h>
#include<math.h>
void main(){
	printf("Roots of a Quadratic Equation");
	int a,b,c;
	printf("\nEnter the values of a,b,c in the Equation 'ax^2 + bx + c': ");
	printf("\na = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	if(a!=0){
		printf("Quadratic Equation: %dx^2 + %dx + %d",a,b,c);
		float d,r1,r2;
	    d=(b*b)-(4*a*c);
	    if(d>=0){
		    r1=(-b+sqrt(d))/(2*a);
		    r2=(-b-sqrt(d))/(2*a);
		    printf("\nRoots of the equation: %f , %f",r1,r2);
    	}
    	else{
		    printf("\nNo real roots");
	    }
	}
	else{
		printf("Invalid Input");
	}
}

