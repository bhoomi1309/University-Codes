#include<stdio.h>
void main(){
	int n,i,r=0,a;
	printf("Sum of First and Last Digits");
	printf("\nEnter any number: ");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		i=n%10;
		r=(r*10)+i;
		n=n/10;
	}
	a=a%10;
	r=r%10;
	printf("Sum of First and Last Digits = %d",a+r);
}


