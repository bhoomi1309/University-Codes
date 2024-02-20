#include<stdio.h>
int prime(int n);
void main(){
	printf("Prime Numbers between given interval");
	int a,b,n,flag;
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	printf("Prime Numbers between %d and %d: ",a,b);
	for(n=a+1;n<b;n++){
		flag=prime(n);
		if(flag==0){
			printf("%d ",n);
		}
	}
}
int prime(int n){
	int i,flag=0;
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	return flag;
}
