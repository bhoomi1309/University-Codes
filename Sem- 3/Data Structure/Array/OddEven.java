import java.util.Scanner;
public class OddEven{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Odd or Even");
		System.out.print("Enter any number: ");
		int n=sc.nextInt();
		if(n%2==0){
			System.out.println("Even");
		}else{
			System.out.println("Odd");
		}
	}
}