#include<stdio.h>
#include<string.h>
void main(){
	char a[1000],b[1000];
	printf("Function for Concatenating first n characters from String 2 to String 1: strncat");
	printf("\nEnter String 1: ");
	gets(a);
	printf("Enter String 2: ");
	gets(b);
	int n,i,count=0;
	printf("How many characters to concatenate from String 2 to String 1? ");
	scanf("%d",&n);
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	for(i=0;i<n;i++){
		a[count]=b[i];
		count++;
	}
	a[count]='\0';
	printf("Modified String 1: %s",a);
}
