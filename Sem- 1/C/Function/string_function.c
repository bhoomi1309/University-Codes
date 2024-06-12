#include<stdio.h>
#include<string.h>
void main(){
	printf("String Handling Functions\n");
	int i;
	char a[1000],b[1000];
	printf("Enter a String: ");
	gets(a);
	printf("Enter a String: ");
	gets(b);
	printf("Length of String 1: %d",strlen(a));
	printf("\nLength of String 2: %d",strlen(b));
	int compare=strcmp(a,b);
	if(compare==0){
		printf("\nBoth Strings are Same");
	}
	else{
		printf("\nBoth Strings are Not Same");
	}
	printf("\nString 1 Concatenated to String 2: %s\n",strcat(b,a));
    printf("String 1 Copied to String 2: %s\n",strcpy(b,a));
    printf("String Upper Case: %s\n",strupr(a));
    printf("String Lower Case: %s\n",strlwr(a));
    printf("Reverse String: %s\n",strrev(a));
}


