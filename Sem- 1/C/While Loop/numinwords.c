#include<stdio.h>
void main(){
	printf("Number in Words");
	int n,rev=0,count=0,i,c=1,r;
	printf("\nEnter any number: ");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		count++;
	}
	while(c<=count){
		i=rev%10;
		if(i==0){
			printf("Zero ");
		}
		else if(i==1){
			printf("One ");
		}
		else if(i==2){
			printf("Two ");
		}
		else if(i==3){
			printf("Three ");
		}
		else if(i==4){
			printf("Four ");
		}
		else if(i==5){
			printf("Five ");
		}
		else if(i==6){
			printf("Six ");
		}
		else if(i==7){
			printf("Seven ");
		}
		else if(i==8){
			printf("Eight ");
		}
		else if(i==9){
			printf("Nine ");
		}
		rev=rev/10;
		c++;
	}
}
