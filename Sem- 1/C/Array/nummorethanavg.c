#include<stdio.h>
void main(){
	printf("Numbers higher than the Average");
	int n,i,sum=0,avg,count=0;
	printf("\nHow many numbers do you want to enter? ");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<=n-1;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	avg=sum/n;
	for(i=0;i<=n-1;i++){
		if(num[i]>avg){
			count+=1;
		}
	}
	printf("Count of Numbers more than Average = %d",count);
}
