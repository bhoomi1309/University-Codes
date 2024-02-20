#include<stdio.h>
void main(){
	int n,i=1,numbers;
	float avg,sum;
	sum=0;
	printf("Sum and Average");
	printf("\nHow many numbers do you want to enter? ");
	scanf("%d",&numbers);
	while(i<=numbers){
		printf("Enter any number: ");
		scanf("%d",&n);
		i++;
		sum=sum+n;
	}
	avg=sum/numbers;
	printf("Sum = %f",sum);
	printf("\nAverage = %f",avg);
}
