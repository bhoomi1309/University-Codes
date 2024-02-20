#include<stdio.h>
char strupper(char a[]);
void main(){
	char a[1000],*ptr;
	int i;
	printf("Lowercase String -> Uppercase String");
	printf("\nEnter String: ");
	scanf("%s",&a);
	ptr=a;
	strupper(a);
	printf("Modified String: ");
	for(i=0;a[i]!='\0';i++){
		printf("%c",*(ptr+i));
	}
}
char strupper(char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
	}
	return a;
}
