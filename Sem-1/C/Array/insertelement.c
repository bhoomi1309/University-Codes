#include<stdio.h>
void main(){
	printf("Inserting an Element in an array");
	int n,i,j,temp,a;
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter Element(%d): ",i+1);
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
	printf("\nEnter an element to insert: ");
	scanf("%d",&a);
	int arr2[n+1];
	i=0;
	j=0;
	while(a>arr[i]){
		arr2[j]=arr[i];
		i++;
		j++;	
	}
	arr2[j]=a;
	j++;
	while(j<n+1){
		arr2[j]=arr[i];
		i++;
		j++;
	}
	printf("Array with Inserted Element: ");
	for(j=0;j<=n;j++){
		printf("%d ",arr2[j]);
	}
}
