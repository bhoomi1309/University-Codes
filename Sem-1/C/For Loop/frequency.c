#include<stdio.h>
void main(){
	printf("Frequency of Digits in an Integer");
	int n,i,count=0,r,temp;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	temp=n;
	for(i=0;i<=9;i++){
		count=0;
		n=temp;
		while(n!=0){
			r=n%10;
			if(r==i){
				count++;
			}
			n=n/10;
		}
		if(count>0){
			printf("Frequency of %d -> %d\n",i,count);
		}
	}
}
