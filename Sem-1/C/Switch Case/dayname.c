#include<stdio.h>
void main(){
	int n;
	printf("Day Name of Week");
	printf("\nEnter any day number: ");
	scanf("%d",&n);
	n=n%7;
	switch(n){
		case 0:printf("Sunday");
		       break;
		case 1:printf("Monday");
		       break;
		case 2:printf("Tuesday");
		       break;
		case 3:printf("Wednesday");
		       break;
		case 4:printf("Thursday");
		       break;
		case 5:printf("Friday");
		       break;
		case 6:printf("Saturday");
		       break;
	}
}
