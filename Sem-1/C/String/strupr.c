#include<stdio.h>
#include<string.h>
void main(){
	char a[1000];
	printf("Function for Returning a String with Upper Characters: strupr\n");
	int i;
	printf("Enter String: ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
	}
	printf("Modified String with Upper Alphabets: %s",a);
}
