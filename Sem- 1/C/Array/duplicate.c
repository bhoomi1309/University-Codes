#include<stdio.h>
void main(){
	printf("No. of Duplicate Elements");
	int n,i,temp;
	printf("\nEnter no. of Elements: ");
	scanf("%d",&n);
	int arr[n],j;
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		    }
		}
	}
	int count=0,k=0,total=0;
	printf("\n");
	while(k<n){
		if(arr[k]==arr[k+1]){
			count++;
			k++;
		}
		else{
			printf("No. of Duplicates of %d: %d\n",arr[k],count);
			total+=count;
			k++;
			count=0;
		}
	}
	printf("Total No. of Duplicates in Array: %d",total);
}
