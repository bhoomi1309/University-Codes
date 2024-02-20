#include<stdio.h>
void main(){
	printf("Missing Terms in a Sequence(1,2,3,..)");
	int n,i,j,temp;
	printf("\nEnter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n],max=0;
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]>max){
			max=arr[i];
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n-1;j++){
			if(arr[i]>arr[j]){
			    temp=arr[i];
			    arr[i]=arr[j];
		    	arr[j]=temp;	
			}
		}
	}
	int arr2[max];
	for(j=0;j<max;j++){
		arr2[j]=j+1;
	}
	i=0;
	printf("Missing Terms: ");
	for(j=0;j<max;j++){
		if(arr[i]==arr2[j]){
			i+=1;
		}
		else{
			printf("%d ",arr2[j]);
		}
	}
}
