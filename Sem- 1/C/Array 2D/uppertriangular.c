#include<stdio.h>
void main(){
	int i,j,m,n;
	printf("Upper Triangular Matrix\nSquare Matrix whose elements are 0 if i>j\n");
	printf("Enter No. of Rows: ");
	scanf("%d",&m);
	printf("Enter No. of Columns: ");
	scanf("%d",&n);
	if(m!=n){
		printf("Not a Square Matrix");
	}
	else{
	    int arr[m][n];
    	for(i=0;i<m;i++){
    		for(j=0;j<n;j++){
    			if(j>=i){
    		    	printf("Enter element at arr[%d][%d]: ",i,j);
		        	scanf("%d",&arr[i][j]);	
				}
				else{
					arr[i][j]=0;
				}
		    }
    	}
	    printf("\nUpper Triangular Matrix\n");
    	for(i=0;i<m;i++){
	    	for(j=0;j<n;j++){
	    		printf("%d\t",arr[i][j]);
		    }
	    	printf("\n");
	    }
			
	}
}
