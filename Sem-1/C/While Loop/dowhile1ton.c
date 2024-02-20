#include<stdio.h>
void main(){
	int n,i=1;
	printf("Print 1 to n [do..while...]");
	printf("\nEnter any number: ");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
}
