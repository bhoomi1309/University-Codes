import java.util.Scanner;
public class AverageArray{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Average of numbers in array till nth position");
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
		System.out.print("\nEnter value of n: ");
		int n=sc.nextInt();
		double sum=0;
		for(int i=0;i<=n;i++){
			sum+=arr[i];
		}
		double avg=sum/(n+1);
		System.out.println("Average: "+avg);
	}
}