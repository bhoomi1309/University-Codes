#include<stdio.h>
void main(){
	printf("Fibonacci Series");
	int n,a=0,b=1,i=3,c,temp;
	printf("\nEnter the number of terms: ");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(;i<=n;){
		c=a+b;
		printf(" %d",c);
		temp=a;
		a=b;
		b=temp+b;
		i++;
	}
}
