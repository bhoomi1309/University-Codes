#include<stdio.h>
#include<math.h>
void main(){
	int n,i,count=0,sum=0,b,c;
	printf("Armstrong Number");
	printf("\nEach digit raised to the power of total number of digits when added equals to the number itself");
	printf("\nEnter any number: ");
	scanf("%d",&n);
	b=n;
	c=n;
	while(n!=0){
		i=n%10;
		n=n/10;
		count++;
	}
	while(b!=0){
		i=b%10;
		b=b/10;
		sum=sum+pow(i,count);
	}
	if(sum==c){
		printf("Armstrong Number");
	}
	else{
		printf("Not an Armstrong Number");
	}
}
