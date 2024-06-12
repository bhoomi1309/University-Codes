#include<stdio.h>
void main(){
	printf("Total Number of Negative Elements in an array");
	int n,i,count=0;
	printf("\nEnter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]<0){
			count+=1;
		}
	}
	printf("Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
    }
	printf("\nNo. of Negative Elements = %d",count);
}
