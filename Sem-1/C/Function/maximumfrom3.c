#include<stdio.h>
float max(float a,float b,float c);
void main(){
	float a,b,c;
	printf("Maximum of 3 Floating Numbers\n");
	printf("Enter any Number: ");
	scanf("%f",&a);
	printf("Enter any Number: ");
	scanf("%f",&b);
	printf("Enter any Number: ");
	scanf("%f",&c);
	printf("Maximum = %f",max(a,b,c));
}
float max(float a,float b,float c){
	if(a>b){
		if(a>c){
			return a;
		}
		else{
			return c;
		}
	}
	else{
		if(b>c){
			return b;
		}
		else{
			return c;
		}
	}
}
