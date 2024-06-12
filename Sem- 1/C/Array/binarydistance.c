#include<stdio.h>
void main(){
	printf("Distance of Binary Codes");
	int a,b,i,count=0,num1[32],num2[32];
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	for(i=31;i>=0;i--){
		num1[i]=a%2;
		num2[i]=b%2;
		a=a/2;
		b=b/2;
	}
	for(i=0;i<32;i++){
		if(num1[i]!=num2[i]){
			count+=1;
		}
	}
	printf("Difference in Binary Codes = %d",count);
}
