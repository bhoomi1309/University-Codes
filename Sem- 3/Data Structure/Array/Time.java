import java.util.Scanner;
public class Time{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Time");
		System.out.print("Enter time in seconds: ");
		int s=sc.nextInt();
		int h=0,m=0;
		m=s/60;
		s=s%60;
		h=m/60;
		m=m%60;
		System.out.format("%02d:%02d:%02d",h,m,s);
	}
}