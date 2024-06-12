#include<stdio.h>
void main(){
	int i,j,m,n;
	printf("Addition of 2 Matrices using Pointer\n");
	printf("Enter No. of Rows: ");
	scanf("%d",&m);
	printf("Enter No. of Columns: ");
	scanf("%d",&n);
	printf("\n");
	int a[m][n],b[m][n],c[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter element at a[%d][%d]: ",i,j);
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter element at b[%d][%d]: ",i,j);
			scanf("%d",(*(b+i)+j));
		}
	}
	printf("\nMatrix 1: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
	printf("\nMatrix 2: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",*(*(b+i)+j));
		}
		printf("\n");
	}
	printf("\nAddition of the 2 Matrices: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",*(*(c+i)+j));
		}
		printf("\n");
	}
}
