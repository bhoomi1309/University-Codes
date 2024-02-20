#include<stdio.h>
int main(){
	int b;
	float g,da,hra;
	printf("Salary");
	printf("\nEnter Basic Salary of an employee: ");
	scanf("%d",&b);
	if(b<=10000){
		hra=b*0.2;
		da=b*0.8;
		g=b+hra+da;
	}
	else{
		if(b<=20000){
			hra=b*0.25;
			da=b*0.9;
			g=b+da+hra;
		}
		else{
			hra=b*0.3;
			da=b*0.95;
			g=b+da+hra;
		}
	}
	printf("Gross Salary of the employee = %f",g);
}
