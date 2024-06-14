import java.util.Scanner;
public class FactorialRecursion{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Facorial of a Number using Recursion");
		System.out.print("Enter any number: ");
		int n=sc.nextInt();
		if(n<0){
			System.out.println("Not Defined");
		}else{
			int ans=factorial(n);
			System.out.println(n+"! = "+ans);
		}
	}
	public static int factorial(int n){
		if(n==0||n==1){
			return 1;
		}else{
			return n*factorial(n-1);
		}
	}
}