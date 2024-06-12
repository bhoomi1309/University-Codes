#include<stdio.h>
void main(){
	int i,n,odd=0,even=0;
	printf("Count of Odd and Even Numbers");
	printf("\nHow many numbers do you want to enter? ");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<=n-1;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&num[i]);
	}
	i=0;
	while(i<=n-1){
		if(num[i]%2==0){
			even+=1;
		}
		else{
			odd+=1;
		}
		i++;
	}
	printf("Count of Odd Numbers: %d",odd);
	printf("\nCount of Even Numbers: %d",even);
}
