#include<stdio.h>
void main(){
	printf("Character Type");
	char ch;
	printf("\nEnter any character: ");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122){
	    printf("Lowercase Alphabet");	
	}	    
	else if(ch>=65 && ch<=90){
		printf("Uppercase Alphabet");
	}
	else if(ch>=48 && ch<=57){
		printf("Digit");
	}
	else{
		printf("Special Character");
	}
}
