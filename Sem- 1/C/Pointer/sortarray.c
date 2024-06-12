#include<stdio.h>
void main(){
	printf("Sort Array using Pointer\n");
	int n,i;
	printf("Enter no. of elements in array: ");
	scanf("%d",&n);
	int arr[n],*p;
	p=arr;
	for(i=0;i<n;i++){
		printf("Enter Number in Array(arr[%d]): ",i+1);
		scanf("%d",p+i);
	}
	printf("Array: ");
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	int j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(p+j)<*(p+i)){
		    	temp=*(p+j);
			    *(p+j)=*(p+i);
		    	*(p+i)=temp;
		}
		}
	}
	printf("\nSorted Array: ");
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
}
