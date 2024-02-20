#include<stdio.h>
void main(){
	printf("Print 1 to n");
	int i,n;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	}
}
