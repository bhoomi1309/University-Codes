#include<stdio.h>
void main(){
	printf("Prime Number");
	int n,i=1,count=0;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			count+=1;
		}
		i++;
	}
	if(count==2){
		printf("Prime Number");
	}
	else{
		printf("Not a Prime Number");
	}
}

