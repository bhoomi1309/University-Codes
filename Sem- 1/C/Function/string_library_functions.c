#include<stdio.h>
#include"string_library.h"
void main(){
	printf("String Handling Functions\n");
	char a[1000],b[1000];
	int i;
	printf("Enter String 1: ");
	gets(a);
	printf("Enter String 2: ");
	gets(b);
	printf("Strings Comparison Function (strcmp): ");
	if(strcompare(a,b)==1){
		printf("Strings are not Same\n");
	}
	else{
		printf("Both Strings are Same\n");
	}
	strconcatenate(b,a);
	printf("String 1 concatenated at the end of String 2 (strcat): ");
	for(i=0;b[i]!='\0';i++){
		printf("%c",b[i]);
	}
	printf("\n");
	strcopy(b,a);
	printf("String 1 copied to String 2 (strcpy): ");
	for(i=0;b[i]!='\0';i++){
		printf("%c",b[i]);
	}
	strupper(a);
	printf("\nUpper Characters String(1) Function (strupr): ");
	for(i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
	strlower(a);
	printf("\nLower Characters String(1) Function (strlwr): ");
	for(i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
	printf("\nString(1) Length Function (strlen): %d",strlength(a));
	char ch,s[1000];
	int flag=0;
	printf("\nEnter a character: ");
	scanf("%c",&ch);
	for(i=0;a[i]!='\0';i++){
		if(ch==a[i]){
			flag=1;
		}
	}
	printf("Function for String(1) Character (strchr): ");
	if(flag==1){
		char *ptr;
    	ptr=s;
	    strcharacter(a,ch,ptr,s);
	    for(i=0;s[i]!='\0';i++){
		    printf("%c",*(ptr+i));
	    }
	}
	else{
		for(i=0;a[i]!='\0';i++){
			printf("%c",a[i]);
		}
	}
	printf("\nString(1) Reverse Function (strrev): ");
	strreverse(a);
	for(i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
}
