#include<stdio.h>
char strlower(char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
		}
	}
}
char strupper(char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
	}
}
int strlength(char a[]){
	int i,count=0;
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	return count;
}
int strcompare(char a[],char b[]){
	int i,counta=0,countb=0,flag=0;
	for(i=0;a[i]!='\0';i++){
		counta++;
	}
	for(i=0;a[i]!='\0';i++){
		countb++;
	}
	if(counta!=countb){
		return 1;
	}
	else{
		for(i=0;a[i]!='\0';i++){
			if(a[i]!=b[i]){
				flag=1;
				break;
			}
		}
		if(flag==1){
			return 1;
		}
		else{
			return 0;
		}
	}
}
char strcopy(char a[],char b[]){
	int i;
	for(i=0;b[i]!='\0';i++){
		a[i]=b[i];
	}
	a[i]='\0';
}
char strconcatenate(char a[],char b[]){
	int i,count=0;
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	for(i=0;b[i]!='\0';i++){
		a[count]=b[i];
		count++;
	}
}
char strcharacter(char a[],char ch,char *ptr,char s[]){
	int i,j=0;
	ptr=s;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==ch){
			for(j=0;a[i]!='\0';j++){
				s[j]=a[i];
				i++;
			}
		}
	}
	s[j]='\0';
	return *ptr;
}
char strreverse(char a[]){
	int count=0,i;
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	for(i=0;i<count;i++){
		int temp=a[i];
		a[i]=a[count-1];
		a[count-1]=temp;
		count--;
	}
}
