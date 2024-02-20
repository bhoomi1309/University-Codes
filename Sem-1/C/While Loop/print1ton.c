#include<stdio.h>
void main(){
	int n,a=1;
	printf("Print 1 to n\n");
	printf("Enter any number: ");
	scanf("%d",&n);
	while(a<=n){
		printf("%d\n",a);
		a++;
	}
}
