#include<stdio.h>
void main(){
	char ch;
	printf("Alphabet or Not");
	printf("\nEnter any character: ");
	scanf("%c",&ch);
	((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))?printf("Alphabet"):printf("Not an Alphabet");
}
