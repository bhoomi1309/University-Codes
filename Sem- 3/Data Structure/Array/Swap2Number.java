import java.util.Scanner;
public class Swap2Number{
	public static void swap(int a,int b){
		int temp=a;
		a=b;
		b=temp;
		System.out.println("a: "+a+"  b: "+b);
	}
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Swap 2 Numbers");
		System.out.print("Enter value for a: ");
		int a=sc.nextInt();
		System.out.print("Enter value for b: ");
		int b=sc.nextInt();
		System.out.println("Before Swapping: ");
		System.out.println("a: "+a+"  b: "+b);
		System.out.println("After Swapping");
		swap(a,b);
	}
}