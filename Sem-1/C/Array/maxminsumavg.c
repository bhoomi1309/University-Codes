#include<stdio.h>
void main(){
	printf("Maximum, Minimum, Sum and Average of an Array");
	int n,i,max,min;
	float sum=0,avg;
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Element(%d): ",i+1);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
		sum+=arr[i];
	}
	avg=sum/n;
	printf("Maximum = %d",max);
	printf("\nMinimum = %d",min);
	printf("\nSum = %f",sum);
	printf("\nAverage = %f",avg);
}
