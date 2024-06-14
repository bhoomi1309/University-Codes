import java.util.Scanner;
public class Power{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Power of a Number using Loop");
		System.out.print("Enter base: ");
		int x=sc.nextInt();
		System.out.print("Enter power: ");
		int y=sc.nextInt();
		int ans=1;
		for(int i=1;i<=y;i++){
			ans*=x;
		}
		System.out.println(x+" raised to "+y+": "+ans);
	}
}