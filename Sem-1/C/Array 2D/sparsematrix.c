#include<stdio.h>
void main(){
	int i,j,m,n,a,count=0;
	printf("Sparse Matrix\nMaximum No. of Elements are Zero\n");
	printf("Enter No. of Rows: ");
	scanf("%d",&m);
	printf("Enter No. of Columns: ");
	scanf("%d",&n);
	a=m*n;
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
			if(arr[i][j]==0){
				count+=1;
			}
		}
		printf("\n");
	}
	printf("\n");
	if(count>a/2){
		printf("Sparse Matrix");
	}
	else{
		printf("Not a Sparse Matrix");
	}
}
