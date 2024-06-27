import java.util.Scanner;
public class TempConversion{
	public static void main(String[] args){
		System.out.println("Temperature Conversion");
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter 0 for input in Celsius and 1 for Fahreheit: ");
		int n=sc.nextInt();
		if(n==1){
			System.out.print("Enter temperature in Fahreheit: ");
			double f=sc.nextDouble();
			double ans=FtoC(f);
			System.out.print("Temperature in Celsius: "+ans);
		}
		else if(n==0){
			System.out.print("Enter temperature in Celsius: ");
			double c=sc.nextDouble();
			double ans=CtoF(c);
			System.out.print("Temperature in Fahrenheit: "+ans);
		}
		else{
			System.out.print("Invalid Input");
			return;
		}
	}
	public static double CtoF(double c){
		double f=(c*9/5)+32;
		return f;
	}
	public static double FtoC(double f){
		double c=(f-32)*5/9;
		return c;
	}
}