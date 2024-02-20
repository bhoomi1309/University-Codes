#include <stdio.h>
int reverse(int n,int rev);
void main(){
   int n,rev=0;
   printf("Reverse a Number using Recursion");
   printf("\nEnter any number: ");
   scanf("%d",&n);
   printf("Reverse Number: %d",reverse(n,rev));
}
int reverse(int n,int rev){
    int rem;
    if(n){
        rem=n%10;
        rev=rev*10+rem;
        reverse(n/10,rev);
    }
    else
        return rev;
}
