#include<stdio.h>
void main(){
	int i,j,a,b,c,d,k;
	printf("Multiplication of 2 Matrices\n");
	printf("\nMatrix 1: \n");
	printf("No. of Rows: ");
	scanf("%d",&a);
	printf("No. of Columns: ");
	scanf("%d",&b);
	printf("\nMatrix 2: \n");
	printf("No. of Rows: ");
	scanf("%d",&c);
	printf("No. of Columns: ");
	scanf("%d",&d);
	printf("\n");
	int arr[a][b],arr2[c][d],arr3[a][d];
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			arr3[i][j]=0;
		}
	}
	if(b!=c){
		printf("Multiplication is Not Possible");
	}
	else{
		for(i=0;i<a;i++){
		    for(j=0;j<b;j++){
			    printf("Enter value for Matrix 1 (arr[%d][%d]): ",i,j);
			    scanf("%d",&arr[i][j]);
	    	}
    	}
    	printf("\n");
    	for(i=0;i<c;i++){
	    	for(j=0;j<d;j++){
	    		printf("Enter value for Matrix 2 (arr2[%d][%d]): ",i,j);
	    		scanf("%d",&arr2[i][j]);
	    	}
    	}
		for(i=0;i<a;i++){
			for(j=0;j<d;j++){
				for(k=0;k<b;k++){
					arr3[i][j]+=arr[i][k]*arr2[k][j];
				}
			}
		}
    	printf("\nMatrix 1: \n");
    	for(i=0;i<a;i++){
	    	for(j=0;j<b;j++){
	    		printf("%d\t",arr[i][j]);
	        }
	    	printf("\n");
    	}
    	printf("\nMatrix 2: \n");
     	for(i=0;i<c;i++){
	    	for(j=0;j<d;j++){
	    		printf("%d\t",arr2[i][j]);
	    	}
	    	printf("\n");
    	}
    	printf("\nMultiplication of Matrix 1 and Matrix 2: \n");
	    for(i=0;i<a;i++){
	    	for(j=0;j<d;j++){
		    	printf("%d\t",arr3[i][j]);
	    	}
	    	printf("\n");
    	}
    }
}
