import java.util.Scanner;
public class SumOfNum{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Sum of Numbers from m to n");
		System.out.print("Enter value of m: ");
		int m=sc.nextInt();
		System.out.print("Enter value of n: ");
		int n=sc.nextInt();
		int sum=0;
		for(int i=m;i<=n;i++){
			sum+=i;
		}
		System.out.println("Sum from "+m+" to "+n+": "+sum);
	}
}