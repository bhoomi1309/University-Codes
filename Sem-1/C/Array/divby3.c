#include<stdio.h>
void main(){
	printf("Number of Elements divisible by 3");
	int n,i,count=0;
	printf("\nEnter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]%3==0){
			count+=1;
		}
	}
	printf("Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
    }
	printf("\nNumber of Elements divisible by 3 = %d",count);
}
