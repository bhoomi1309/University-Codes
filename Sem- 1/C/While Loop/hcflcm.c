#include<stdio.h>
void main(){
	printf("HCF and LCM of 2 Numbers");
	int a,b,temp,hcf,i=1;
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	if(b>a){
		temp=a;
		a=b;
		b=temp;
	}
	for(;i<=b;){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
		i++;
	}
	printf("HCF(%d,%d) = %d",a,b,hcf);
	int c,j=1,lcm;
	c=a*b;
	for(;j<=c;){
		if(j%a==0 && j%b==0){
			lcm=j;
			break;
		}
		j++;
	}
	printf("\nLCM(%d,%d) = %d",a,b,lcm);
}
