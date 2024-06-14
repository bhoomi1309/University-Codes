import java.util.Scanner;
public class Factors{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Factors of a Number");
		System.out.print("Enter any number: ");
		int n=sc.nextInt();
		System.out.print("Factors of "+n+": ");
		for(int i=1;i<=n;i++){
			if(n%i==0){
				System.out.print(i+" ");
			}
		}
	}
}