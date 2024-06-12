#include<stdio.h>
void main(){
	printf("Digits of a Number");
	int n,i,count=0,rev=0,d=1;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	while(n!=0){
		i=n%10;
		rev=rev*10+i;
		n=n/10;
		count++;
	}
	while(d<=count){
		i=rev%10;
		printf("%d ",i);
		rev=rev/10;
		d++;
	}
}
