#include<stdio.h>
void main(){
	int n,i;
	printf("Copy an array to another using Pointer\n");
	printf("Enter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n],arr2[n],*p,*q;
	p=arr;
	q=arr2;
	for(i=0;i<n;i++){
		printf("Enter Number(arr[%d]): ",i);
		scanf("%d",p+i);
	}
	printf("Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nCopied to another array: ");
	for(i=0;i<n;i++){
		*(q+i)=*(p+i);
	}
	for(i=0;i<n;i++){
		printf("%d ",*(q+i));
	}
}
