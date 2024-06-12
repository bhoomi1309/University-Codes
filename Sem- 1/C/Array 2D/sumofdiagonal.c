#include<stdio.h>
void main(){
	int i,j,m,n,sum=0;
	printf("Diagonal Elememts and their Sum\n");
	printf("Enter No. of Rows: ");
	scanf("%d",&m);
	printf("Enter No. of Columns: ");
	scanf("%d",&n);
	int arr[m][n];
	if(m!=n){
		printf("\nSum of Diagonal Elements cannot be calculated because it is Not a Square Matrix!");
	}
	else{
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
		printf("\nDiagonal Elements: ");
	    for(i=0;i<m;i++){
		    for(j=0;j<n;j++){
			    if(i==j){
				    printf("%d ",arr[i][j]);
				    sum+=arr[i][j];
			    }
		    } 
	    }
    	printf("\nSum = %d",sum);
	}
}
