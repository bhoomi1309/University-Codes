#include<stdio.h>
int swaparray(int n,int arr1[],int arr2[]);
void main(){
	printf("Swap Elements of 2 Integer Arrays");
	int n,i;
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	int arr1[n],arr2[n],*a1,*a2;
	printf("Array 1\n");
	for(i=0;i<n;i++){
		printf("Enter Number in Array a1[%d]: ",i);
		scanf("%d",&arr1[i]);
	}
	printf("Array 2\n");
	for(i=0;i<n;i++){
		printf("Enter Number in Array a2[%d]: ",i);
		scanf("%d",&arr2[i]);
	}
	a1=arr1;
	a2=arr2;
	printf("Array 1: ");
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}
	printf("\nArray 2: ");
	for(i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
	swaparray(n,arr1,arr2);
	printf("\nAfter Swapping\nArray 1: ");
	for(i=0;i<n;i++){
		printf("%d ",*(a1+i));
	}
	printf("\nArray 2: ");
	for(i=0;i<n;i++){
		printf("%d ",*(a2+i));
	}
}
int swaparray(int n,int arr1[],int arr2[]){
	int *a1,*a2,i;
	a1=arr1;
	a2=arr2;
	for(i=0;i<n;i++){
		int temp=*(a1+i);
		*(a1+i)=*(a2+i);
		*(a2+i)=temp;
	}
}
