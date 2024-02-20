#include<stdio.h>
void main(){
	int n,i,temp;
	printf("Swap 2 Arrays using Pointer\n");
	printf("Enter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n],arr2[n],*p,*q;
	p=arr;
	q=arr2;
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter Number(arr[%d]): ",i);
		scanf("%d",p+i);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter Number(arr2[%d]): ",i);
		scanf("%d",q+i);
	}
	printf("\n");
	printf("Array 1: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Array 2: ");
	for(i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
	printf("\n\nAfter Swappping 2 Arrays: \n");
	for(i=0;i<n;i++){
		temp=*(p+i);
		*(p+i)=*(q+i);
		*(q+i)=temp;
	}
	printf("Array 1: ");
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	printf("\n");
	printf("Array 2: ");
	for(i=0;i<n;i++){
		printf("%d ",*(q+i));
	}
}
