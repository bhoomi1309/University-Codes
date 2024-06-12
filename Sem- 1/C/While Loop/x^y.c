#include<stdio.h>
void main(){
	printf("Value for x^y");
	int x,y,i=1,a=1;
	printf("\nEnter any value for Base(x): ");
	scanf("%d",&x);
	printf("Enter any value for Power(y): ");
	scanf("%d",&y);
	while(i<=y){
		a=a*x;
		i++;
	}
	printf("%d^%d = %d",x,y,a);
}
