#include<stdio.h>
void main(){
	printf("Copying all elements from an array to another");
	int n,i;
	printf("\nEnter no. of Elements: ");
	scanf("%d",&n);
	int arr[n],arr2[n];
	for(i=0;i<n;i++){
		printf("Enter Element(%d): ",i+1);
		scanf("%d",&arr[i]);
		arr2[i]=arr[i];
	}
	printf("Elements copied to another array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
}
