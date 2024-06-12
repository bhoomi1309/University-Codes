#include<stdio.h>
void main(){
	int n,i;
	printf("Elements of Array in an ascending order, if Frequency of all elements is at least 3, print Yes otherwise No\n");
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	int arr[n];
	int max=0;
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]>max){
			max=arr[i];
		}
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
	int arr2[max+1];
	for(i=0;i<=max;i++){
		arr2[i]=0;
	}
	printf("Array in Ascending Order: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	i=0;
	temp=0;
	while(i<n){
		int count=1;
		for(j=i+1;j<n;j++){
			if(arr2[arr[i]]==0){
				if(arr[i]==arr[j]){
				    count++;
		    	}
			}
		}
		if(count<3){
			printf("\nNo");
			temp=1;
			break;
		}
		arr2[arr[i]]=1;
		i+=count;
	}
	if(temp==0){
		printf("\nYes");
	}
}
