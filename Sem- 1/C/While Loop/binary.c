#include<stdio.h>
void main(){
	printf("Decimal -> Binary");
	int n,i,j,a;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	int arr[32];
	for(i=0;i<=31;i++){
		arr[i]=n%2;
		n=n/2;
	}
	for(j=i-1;j>=0;j--){
		printf("%d",arr[j]);
	}
}
