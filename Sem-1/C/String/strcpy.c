#include<stdio.h>
#include<string.h>
void main(){
	printf("Function for Copying a String: strcpy");
	char a[1000],b[1000];
	int i;
	printf("\nEnter String 1: ");
	gets(a);
	printf("Enter String 2: ");
	gets(b);
	for(i=0;b[i]!='\0';i++){
		a[i]=b[i];
	}
	a[i]='\0';
	printf("Copied String 2 to String 1: %s",a);
}
