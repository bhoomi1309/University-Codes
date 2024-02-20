#include<stdio.h>
void main(){
	int n,i;
	printf("Frequency of Elements in an Array\n");
	printf("Enter no. of elements: ");
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
	int temp,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
    }
	i=0;
	int count=1;
	printf("\n");
	while(i<n){
		if(arr[i]==arr[i+1]){
			count++;
			i++;
		}
		else{
			printf("Frequency of %d: %d\n",arr[i],count);
			i++;
			count=1;
		}
	}
}
