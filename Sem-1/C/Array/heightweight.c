#include<stdio.h>
void main(){
	printf("Height and Weight\n\n");
	int i,height[5],weight[5],count=0;
	for(i=0;i<=4;i++){
		printf("Person(%d)\n",i+1);
		printf("Enter Height: ");
		scanf("%d",&height[i]);
		printf("Enter Weight: ");
		scanf("%d",&weight[i]);
		printf("\n");
	}
	i=0;
	while(i<=4){
		if(height[i]>170 && weight[i]<50){
			count+=1;
		}
		i++;
	}
	printf("Number of Person with Height > 170 and Weight < 50 = %d",count);
}
