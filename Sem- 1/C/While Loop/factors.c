#include<stdio.h>
void main(){
	printf("Factors of a Number");
	int n,i=1;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	printf("Factors of %d: ",n);
	while(i<=n){
		if(n%i==0){
			printf("\n\t%d",i);
			i++;
		}
		else{
			i++;
		}
	}
}
