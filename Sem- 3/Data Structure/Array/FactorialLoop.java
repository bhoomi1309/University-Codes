import java.util.Scanner;
public class FactorialLoop{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Facorial of a Number using Loop");
		System.out.print("Enter any number: ");
		int n=sc.nextInt();
		int ans=1;
		if(n<0){
			System.out.println("Not Defined");
		}else{
			for(int i=1;i<=n;i++){
				ans*=i;
			}
			System.out.println(n+"! = "+ans);
		}
	}
}