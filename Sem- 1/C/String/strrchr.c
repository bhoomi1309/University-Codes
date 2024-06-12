#include<stdio.h>
#include<string.h>
void main(){
	char a[1000],b;
	printf("Function for printing Last Occurence of Character in a String: strrchr");
	printf("\nEnter String: ");
	gets(a);
	printf("Enter a Character: ");
	scanf("%c",&b);
	int i,j;
	for(i=0;a[i]!='\0';i++){
		if(b==a[i]){
			j=i;
		}
	}
	printf("Modified String: ");
	for(i=j;a[j]!='\0';j++){
		printf("%c",a[j]);
	}
}
