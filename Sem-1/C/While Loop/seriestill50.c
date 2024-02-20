#include<stdio.h>
void main(){
	int n=1,count=1;
	printf("First 50 numbers in series 1,4,7,10,...\n\n");
	while(count<=50){
		printf("%d ",n);
		n+=3;
		count++;
	}
}
