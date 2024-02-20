#include<stdio.h>
void main(){
	int n,year;
	printf("No. of Days in a Month");
	printf("\nEnter any year: ");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0){
		year=1;
		printf("Leap Year");
	}
	else if(year%400==0){
		year=1;
		printf("Leap Year");
	}
	else{
		year=0;
		printf("Not a Leap Year");
	}
	printf("\nEnter month[1-12]: ");
	scanf("%d",&n);
	switch(n){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("31 Days");
		        break;
		case 4:
		case 6:
		case 9:
	    case 11:printf("30 Days");
	            break;
	            default:printf("Invalid Input");
	            break;
	    case 2: switch(year){
			        case 1:printf("29 Days");
			               break;
			        case 0:printf("28 Days");
			               break;
			    break;
		}
			
	}
}
