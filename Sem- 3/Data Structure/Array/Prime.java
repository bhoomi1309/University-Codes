import java.util.Scanner;
public class Prime{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Prime Number Detector");
		System.out.print("Enter any number: ");
		int n=sc.nextInt();
		int count=0;
		if(n<0){
			System.out.println("Not Defined");
		}else if(n==0||n==1){
			System.out.println("Neither Prime nor Composite");
		}else{
			for(int i=2;i<n/2;i++){
				if(n%i==0){
					count++;
				}
			}
			if(count==0){
				System.out.println("Prime");
			}else{
				System.out.println("Not Prime");
			}
		}
	}
}