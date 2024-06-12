#include<stdio.h>
void main(){
	printf("Time ");
	int s,m,h;
	printf("\nEnter no. of seconds: ");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
    s=s%60;
	printf("%02d",h);
	printf(":%02d",m);
	printf(":%02d",s);	
}
