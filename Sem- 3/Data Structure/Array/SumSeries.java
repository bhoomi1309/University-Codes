import java.util.Scanner;
public class SumSeries{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Sum of Series: 1+(1+2)+(1+2+3)+...+(1+2+3+...+n)");
		System.out.print("Enter value of n: ");
		int n=sc.nextInt();
		int sum=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				sum+=j;
			}
		}
		System.out.println("Sum = "+sum);
	}
}