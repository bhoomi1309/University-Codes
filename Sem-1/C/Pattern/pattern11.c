#include<stdio.h>
void main(){
	printf("Pattern\n");
	int i,j,a,n;
	char ch='A';
	printf("Enter no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++){
		a=1;
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(j%2!=0){
				if(i%2==0){
					printf("%c",ch);
		    	    ch++;
				}
				else{
				    printf("%d",a);
		    	    a++;	
				}	
			}
			else{
				printf(" ");
			}
		}
	printf("\n");
    }
}
