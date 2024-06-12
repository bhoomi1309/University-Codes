#include<stdio.h>
#include<string.h>
void main(){
	printf("Length of String using Pointer");
	char a[1000];
	printf("\nEnter String: ");
	gets(a);
	int *p,count=0,i;
	p=&count;
	for(i=0;a[i]!='\0';i++){
		(*p)++;
	}
	printf("String Length: %d",*p);
}
