#include<stdio.h>
#include<string.h>
void main(){
	char a[1000],b[1000];
	int counta=0,countb=0,i;
	printf("Function for Comparing 2 Strings: strcmp");
	printf("\nEnter String 1: ");
	gets(a);
	printf("Enter String 2: ");
	gets(b);
	for(i=0;a[i]!='\0';i++){
		counta++;
	}
	for(i=0;b[i]!='\0';i++){
		countb++;
	}
	int count=0;
	if(counta!=countb){
		printf("Both Strings are Not Same");
	}
	else{
		for(i=0;a[i]!='\0';i++){
			if(a[i]!=b[i]){
				count=1;
				break;
			}
		}
		if(count==1){
	        printf("Both Strings are Not Same");
    	}
	    else{
	    	printf("Both Strings are Same");
    	}
	}
}
