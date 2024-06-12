#include<stdio.h>
void main(){
	printf("Array Pointer");
	int n,i;
	printf("\nEnter no. of Elements: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
	}
	int *p;
	p=arr;
	printf("Elements: ");
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
}
