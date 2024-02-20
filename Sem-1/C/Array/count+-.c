#include<stdio.h>
void main(){
	int i,n,positive=0,negative=0;
	printf("Count of Positive and Negative Numbers");
	printf("\nHow many numbers do you want to enter? ");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<=n-1;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&num[i]);
	}
	i=0;
	while(i<=n-1){
		if(num[i]>=0){
			positive+=1;
		}
		else{
			negative+=1;
		}
		i++;
	}
	printf("Count of Positive Numbers: %d",positive);
	printf("\nCount of Negative Numbers: %d",negative);
}
