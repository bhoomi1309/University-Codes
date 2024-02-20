#include<stdio.h>
void main(){
	printf("Swap First Element with Last, Second with Second-Last and so on...");
	int n,i,temp,a;
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
	printf("\nWhich Elements do you want to swap(First Element with Last, Second with Second-Last and so on...)? ");
	scanf("%d",&a);
	i=a-1;
	temp=arr[i];
	arr[i]=arr[n-i-1];
	arr[n-i-1]=temp;
	printf("New Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
    }
}
