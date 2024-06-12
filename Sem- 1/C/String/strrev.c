#include<stdio.h>
#include<string.h>
void main(){
	char a[1000];
	printf("Function for Reversing a String: strrev\n");
	int i,temp,count=0;
	printf("Enter String: ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	for(i=0;i<count;i++){
		temp=a[i];
		a[i]=a[count-1];
		a[count-1]=temp;
		count--;
	}
	printf("Reverse String: %s",a);
}


