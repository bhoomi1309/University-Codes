#include<stdio.h>
int findchar(char a[],char b,int arr[]);
void main(){
    char a[1000],b;
    int i,count=0,flag=0;
    printf("Find a Character from a String\n");
    printf("Enter the String: ");
    gets(a);
    printf("Enter the Character: ");
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++){
    	if(b==a[i]){
    		count++;
    		flag=1;
		}
	}
	if(flag==0){
		printf("Character '%c' is not found in the String",b);
	}
	else{
		int *ptr,arr[count];
        ptr=arr;
        findchar(a,b,arr);
        printf("Character '%c' is found on the index of String: ",b);
        for(i=0;i<count;i++){
            printf("%d ",*(ptr+i));
        }
	}
}
int findchar(char a[],char b,int arr[]){
    int i,j=0;
    for (i=0;a[i]!='\0';i++){
        if (a[i]==b){
            arr[j]=i;
            j++;
        }    
    }
}
