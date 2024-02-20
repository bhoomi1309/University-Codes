#include<stdio.h>
#include<string.h>
void main(){
	printf("String (gets, puts)");
	char s1[100];
	printf("\nEnter String: ");
	gets(s1);
	puts(s1);
	char s2[100];
	printf("\nString (scanf)");
	printf("\nEnter String: ");
	scanf("%s",&s2);
	printf("String: %s",s2);
}
