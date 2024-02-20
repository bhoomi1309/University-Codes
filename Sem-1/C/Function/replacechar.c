#include<stdio.h>
#include<string.h>
char replacechar(char a[],char b,char c);
void main(){
	printf("Replace a Character in a String");
	char a[1000],b,c,*ptr;
	int i;
	printf("\nEnter a String: ");
	gets(a);
	printf("Enter the character to replace and another character to replace with: ");
	scanf("%c %c",&b,&c);
	ptr=a;
	replacechar(a,b,c);
	printf("Modified String: ");
	for(i=0;a[i]!='\0';i++){
		printf("%c",*(ptr+i));
	}
}
char replacechar(char a[],char b,char c){
	int i,count=0;
	for(i=0;a[i]!='\0';i++){
		if(b!=a[i]){
			count++;
		}
	}
	if(count==strlen(a)){
		printf("Character %c does not occur in String\n",b);
	}
	for(i=0;a[i]!='\0';i++){
		if(b==a[i]){
			a[i]=c;
		}
	}
	return a;
}
