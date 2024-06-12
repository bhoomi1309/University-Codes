#include<stdio.h>
void main(){
	int i,j,m,n;
	printf("Transpose of a Matrix\n");
	printf("Enter No. of Rows: ");
	scanf("%d",&m);
	printf("Enter No. of Columns: ");
	scanf("%d",&n);
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter element at arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nMatrix Form\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of the Matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
}
