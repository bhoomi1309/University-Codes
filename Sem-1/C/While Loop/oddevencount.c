#include<stdio.h>
void main(){
	printf("Count of Odd and Even Numbers\n");
	int n,oddcount=0,evencount=0,i=1;
	while(i<=10){
		printf("Enter any number: ");
		scanf("%d",&n);
		if(n%2==0){
			evencount+=1;
		}
		else{
			oddcount+=1;
		}
		i++;
	}
	printf("Count of Odd Numbers = %d",oddcount);
	printf("\nCount of Even Numbers = %d",evencount);
}
