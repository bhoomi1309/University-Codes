#include<stdio.h>
#include<math.h>
void main(){
	int n,i;
	float sum=0,mul=1,avg,hm,gm,sum2=0;
	printf("Average, Geometric and Harmonic Mean");
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	float arr[n];
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%f",&arr[i]);
		sum+=arr[i];
		mul*=arr[i];
		sum2+=1.0/arr[i];
	}
	avg=sum/n;
	printf("Average = %f",avg);
	gm=pow(mul,1.0/n);
	printf("\nGeometric Mean = %f",gm);
	hm=n/sum2;
	printf("\nHarmonic Mean = %f",hm);	
}
