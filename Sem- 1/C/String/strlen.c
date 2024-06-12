#include<stdio.h>
#include<string.h>
void main(){
	char s[1000];
	printf("Function for String Length: strlen");
	printf("\nEnter String: ");
	gets(s);
	int i,count=0;
	for(i=0;s[i]!='\0';i++){
		count++;
	}
	printf("Length of String = %d",count);
}
