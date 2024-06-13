import java.util.Scanner;
public class SumOfNumArray{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Sum of Numbers from m index to n index in Array");
		System.out.print("Enter no. of elements in array: ");
		int a=sc.nextInt();
		int[] arr=new int[a];
		for(int i=0;i<arr.length;i++){
			System.out.print("Enter value at arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		System.out.print("Array: ");
		for(int j=0;j<arr.length;j++){
			System.out.print(arr[j]+" ");
		}
		System.out.print("\nEnter value of m: ");
		int m=sc.nextInt();
		System.out.print("Enter value of n: ");
		int n=sc.nextInt();
		int sum=0;
		for(int i=m;i<=n;i++){
			sum+=arr[i];
		}
		System.out.print("Sum of Numbers from "+m+" index to "+n+" index: "+sum);
	}
}
