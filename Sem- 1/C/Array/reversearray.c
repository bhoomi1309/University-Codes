#include<stdio.h>
void main(){
	printf("Reverse Elements of an array");
	int n,i,temp;
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
    }
	for(i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("\nReverse Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
    }
}
