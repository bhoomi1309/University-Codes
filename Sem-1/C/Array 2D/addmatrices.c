#include<stdio.h>
void main(){
	int i,j,m,n;
	printf("Addition of 2 Matrices\n");
	printf("Enter No. of Rows: ");
	scanf("%d",&m);
	printf("Enter No. of Columns: ");
	scanf("%d",&n);
	printf("\n");
	int arr[m][n],arr2[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter element at arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter element at arr2[%d][%d]: ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\nMatrix 1: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix 2: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	printf("\nAddition of the 2 Matrices: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
}
