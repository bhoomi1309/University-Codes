#include<stdio.h>
#include<string.h>
void main(){
	char s[1000],ch;
	printf("Function for String Character: strchr");
	printf("\nEnter String: ");
	gets(s);
	printf("Enter a Character: ");
	scanf("%c",&ch);
	int i,n=0,count=0;
	for(i=0;s[i]!='\0';i++){
		count++;
		if(s[i]==ch){
			printf("Modified String: ");
			while(s[i]!='\0'){
				printf("%c",s[i]);
				i++;
			}
		}
		else{
			n++;
		}
	}
	if(n==count){
		printf("Character '%c' doesn't exist in the String '%s'",ch,s);
	}
}
