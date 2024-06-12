#include<stdio.h>
void main(){
	printf("Alphabets");
	char Ch='A';
	printf("\nUppercase Alphabets: ");
	while(Ch>='A'&&Ch<='Z'){
		printf("%c ",Ch);
		Ch++;
	}
	char ch='a';
	printf("\nLowercase Alphabets: ");
	while(ch>='a'&&ch<='z'){
		printf("%c ",ch);
		ch++;
	}
}
