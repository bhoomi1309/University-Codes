#include<stdio.h>
#include<math.h>
void main(){
	int n=0;
	printf("Square root for 0 to 9");
	printf("\nNumber \t Square root");
	while(n<=9){
		float a=sqrt(n);
		printf("\n  %d \t   %f",n,a);
		n++;
	}
}
