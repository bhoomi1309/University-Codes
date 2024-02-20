#include<stdio.h>
void main(){
	printf("Two Largest Elements");
	int n,i,j,temp;
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Element(%d): ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nTwo Largest Elements: ");
	for(i=0;i<2;i++){
		printf("%d ",arr[i]);
	}
}
