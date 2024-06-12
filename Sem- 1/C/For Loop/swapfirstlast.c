#include<stdio.h>
#include<math.h>
void main(){
	printf("Swapping First and Last Digit of a Number");
	int n,i,count=0,a,b,c,d,e,g;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	a=n;
	b=n;
	c=n;
	while(n!=0){
		n=n/10;
		count++;
	}
	a=a%10;
	for(i=1;i<count;i++){
		b=b/10;
	}
	i=count-1;
	d=pow(10,i);
	e=(a*d+(c%d))/10;
	g=e*10+b;
	printf("Swapping First and Last Digits = %d",g);
}
