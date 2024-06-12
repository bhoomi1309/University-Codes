#include<stdio.h>
#include<math.h>
int armstrong(int n){
	int i,count=0,sum=0,b,c;
	b=n;
	c=n;
	while(n!=0){
		i=n%10;
		n=n/10;
		count++;
	}
	while(b!=0){
		i=b%10;
		b=b/10;
		sum=sum+pow(i,count);
	}
	if(sum==c){
		return 0;
	}
	else{
		return 1;
	}
}
int prime(int n){
	int i,flag=0;
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag!=1){
	    return 0;
   	}
   	else{
   		return 1;
    }	
}
int perfect(int n){
	int i=1,sum=0;
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		return 0;
	}
	else{
		return 1;
	}
}
