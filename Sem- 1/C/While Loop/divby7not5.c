#include<stdio.h>
void main(){
	int n=101;
	printf("Between 100 and 200... Divisible by 7 but not by 5");
	while(n>100 && n<200){
		if(n%7==0 && n%5!=0){
			printf("\n%d",n);
			n++;
		}
		else{
			n++;
		}
	}
}
