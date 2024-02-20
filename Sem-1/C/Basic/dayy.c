#include<stdio.h>
void main(){
	printf("Days ");
	int d,y,w;
	printf("\nEnter no. of days: ");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	w=d/7;
    d=d%7;
	printf("Year = %d",y);
	printf("\nWeek = %d",w);
	printf("\nDay = %d",d);	
}
