#include<stdio.h>
void main(){
	printf("x^y without multiplication and power function");
	int x,y,ans,increment,i,j;
	printf("\nEnter Base(x): ");
	scanf("%d",&x);
	printf("Enter Power(y): ");
	scanf("%d",&y);
	increment=x;
	ans=x;
	for(i=1;i<y;i++){
		for(j=1;j<x;j++){
			ans=ans+increment;
		}
		increment=ans;
	}
	printf("%d ^ %d = %d",x,y,ans);
}
