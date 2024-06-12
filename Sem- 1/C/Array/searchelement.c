#include<stdio.h>
void main(){
	printf("Searching Element in an array");
	int n,i,a;
	printf("\nEnter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter any element(%d): ",i+1);
		scanf("%d",&arr[i]);
	}
    printf("Array: ");
    for(i=0;i<n;i++){
		printf("%d ",arr[i]);
    }
    printf("\nElement to search: ");
    scanf("%d",&a);
    i=0;
    printf("Position of %d in array at Index: ",a);
    while(i<n){
		if(arr[i]==a){
			printf("%d ",i);
		}
		i++;
	}
}
