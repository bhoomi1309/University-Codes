import java.util.Scanner;
public class Year{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Time");
		System.out.print("Enter no. of days: ");
		int d=sc.nextInt();
		int y=0,w=0;
		y=d/365;
		d=d%365;
		w=d/7;
		d=d%7;
		System.out.println(y+" Year "+w+" Week "+d+" Days");
	}
}