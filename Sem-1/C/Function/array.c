#include<stdio.h>
int array(int arr[],int n);
void main(){
	printf("Passing an Array in Function\n");
	int n;
	printf("Enter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	int i=0;
	while(i<n){
		printf("Enter Number in array arr[%d]: ",i);
		scanf("%d",&arr[i]);
		i++;
	}
	array(arr,n);
}
int array(int arr[],int n){
	printf("Array: ");
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
