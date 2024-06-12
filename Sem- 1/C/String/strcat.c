#include<stdio.h>
#include<string.h>
void main(){
	printf("Function for Concatenating a String: strcat");
	char a[1000],b[1000];
	int i,count=0;
	printf("\nEnter String 1: ");
	gets(a);
	printf("Enter String 2: ");
	gets(b);
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	for(i=0;b[i]!='\0';i++){
		a[count]=b[i];
		count++;
	}
	a[count]='\0';
	printf("Concatenation of String 2 to String 1: %s",a);
}
