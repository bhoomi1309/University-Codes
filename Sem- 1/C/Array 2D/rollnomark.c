#include<stdio.h>
void main(){
	printf("Roll no. and Marks of Students");
	int n,i,j;
	printf("\nEnter Total No. of Students: ");
	scanf("%d",&n);
	int arr[n][2];
	for(i=0;i<n;i++){
		printf("\nStudent(%d)\n",i+1);
		for(j=0;j<2;j++){
			if(j==0){
				printf("Enter Roll No.: ");
				scanf("%d",&arr[i][j]);
			}
			if(j==1){
				printf("Enter Marks: ");
				scanf("%d",&arr[i][j]);
			}
		}
	}
	printf("\nRoll No.\tMarks\n");
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			printf("%d\t\t",arr[i][j]);
		}
		printf("\n");
	}
}
