#include<stdio.h>
void main(){
	int i,j,m,n;
	printf("2-D Array in Matrix Form\n");
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
}
