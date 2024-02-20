#include<stdio.h>
#include<string.h>
void main(){
	char a[1000],b[1000];
	printf("Function for Comparing first n characters of String 1 and String 2: strncmp");
	printf("\nEnter String 1: ");
	gets(a);
	printf("Enter String 2: ");
	gets(b);
	int n,i,j=0;
	printf("How many characters to compare of String 1 and String 2? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(a[i]!=b[i]){
			j=1;
			break;
		}
	}
	if(j==0){
		printf("First %d characters of String 1 and String 2 are Same",n);
	}
	else{
		printf("First %d characters of String 1 and String 2 are not Same",n);
	}
}
