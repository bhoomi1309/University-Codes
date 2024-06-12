#include<stdio.h>
#include<string.h>
void main(){
	char a[1000],b[1000];
	printf("Function for Copying first n characters from String 2 to String 1: strncpy");
	printf("\nEnter String 1: ");
	gets(a);
	printf("Enter String 2: ");
	gets(b);
	int n,i;
	printf("How many characters to copy from String 2 to String 1? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a[i]=b[i];
	}
	a[i]='\0';
	printf("Modified String 1: %s",a);
}
