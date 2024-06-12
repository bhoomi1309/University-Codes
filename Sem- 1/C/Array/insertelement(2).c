#include<stdio.h>
void main(){
	printf("Inserting an Element in an array");
	int n,i,j,a,b;
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
	printf("\nEnter an element to insert: ");
	scanf("%d",&a);
	printf("At what position do you want to insert the element? ");
	scanf("%d",&b);
	int arr2[n+1];
	i=0;
	j=0;
	while(b>i){
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

