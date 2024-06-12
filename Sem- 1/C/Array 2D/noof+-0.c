#include<stdio.h>
void main(){
	int i,j,m,n,positive=0,negative=0,zero=0;
	printf("Count of Positive, Negative and Zero Elements\n\n");
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
			if(arr[i][j]>0){
				positive+=1;
			}
			else if(arr[i][j]==0){
				zero+=1;
			}
			else{
				negative+=1;
			}
		}
		printf("\n");
	}
	printf("\nNo. of Positive Elements: %d",positive);
	printf("\nNo. of Negative Elements: %d",negative);
	printf("\nNo. of Zero Elements: %d",zero);
}
