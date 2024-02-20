#include<stdio.h>
void main(){
	int n,i=1;
	printf("Multiplication Table");
	printf("\nEnter any number: ");
	scanf("%d",&n);
	while(i<=10){
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
}
