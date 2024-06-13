import java.util.Scanner;
public class Average{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Average of first n numbers");
		System.out.print("Enter value of n: ");
		int n=sc.nextInt();
		double sum=0.0;
		for(int i=1;i<=n;i++){
			sum+=i;
		}
		double avg=sum/n;
		System.out.println("Average of first "+n+" numbers: "+avg);
	}
}