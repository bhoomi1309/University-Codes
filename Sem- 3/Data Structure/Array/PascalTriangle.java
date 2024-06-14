import java.util.Scanner;
public class PascalTriangle{
	public static int factorial(int i){
        if (i==0){
            return 1;
        }
        return i*factorial(i-1);
    }
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Pascal's Triangle");
		System.out.print("Enter no. of rows to print: ");
		int n=sc.nextInt();
        for (int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                 System.out.print(" ");
            }
            for(int j=0;j<=i;j++){
                 System.out.print(" "+ factorial(i)/(factorial(i - j)* factorial(j)));
            }
            System.out.println();
        }
	}
}