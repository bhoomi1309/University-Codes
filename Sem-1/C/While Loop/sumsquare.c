#include<stdio.h>
#include<math.h>
void main(){
	printf("Sum of Squares");
	int n,a,i=1,sum=0;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	while(i<=n){
		a=pow(i,2);
		sum = sum + a;
		i=i+1;
	}
	printf("Sum of series = %d",sum);
}
