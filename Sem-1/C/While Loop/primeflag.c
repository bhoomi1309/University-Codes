#include<stdio.h>
void main(){
	printf("Prime Number using flag");
	int n,i=2,flag=0;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	if(n==1||n==0){
		printf("Not a Prime Number");
	}
	else{
		while(i<=n/2){
		if(n%i==0){
			flag=1;
		}
		i++;
	    }
	    if(flag==0){
		    printf("Prime Number");
	    }
    	else{
	    	printf("Not a Prime Number");
	    }
	}
	
}
