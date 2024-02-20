#include<stdio.h>
void main(){
	int n=1,a;
	printf("Print Odd Numbers from 1 to n");
	printf("\nEnter any number: ");
	scanf("%d",&a);
	while(n<=a){
		if(n%2!=0){
			printf("%d\n",n);
			n++;
		}
		else{
			n++;
		}
	}
}
