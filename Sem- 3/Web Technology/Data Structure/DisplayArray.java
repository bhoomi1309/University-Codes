import java.util.Scanner;
public class DisplayArray{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Read and Display n numbers using Array");
		System.out.print("Enter no. of elements in array: ");
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<arr.length;i++){
			System.out.print("Enter value at arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		System.out.print("Array: ");
		for(int j=0;j<arr.length;j++){
			System.out.print(arr[j]+" ");
		}
	}
}